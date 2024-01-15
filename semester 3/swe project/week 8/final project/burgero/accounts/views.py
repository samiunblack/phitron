from django.shortcuts import render, redirect, HttpResponse
from django.views.generic import FormView, CreateView
from .forms import UserRegistrationForm, UserLoginForm, UserUpdateForm, AddressCreationForm
from django.urls import reverse_lazy
from django.contrib.auth import login, logout, authenticate
from django.contrib.auth.views import LoginView, LogoutView
from django.utils.http import urlsafe_base64_encode, urlsafe_base64_decode
from django.contrib.auth.models import User
from django.contrib.auth.tokens import default_token_generator
from django.utils.encoding import force_bytes
from django.template.loader import render_to_string
from django.core.mail import EmailMultiAlternatives
from django.views import View
from django.contrib.auth.mixins import LoginRequiredMixin
from .models import UserAddress


class UserRegistrationView(FormView):
    template_name = 'user_registration.html'
    form_class = UserRegistrationForm
    success_url = reverse_lazy('home')

    def form_valid(self, form):
        user = form.save()
        token = default_token_generator.make_token(user)
        uid = urlsafe_base64_encode(force_bytes(user.pk))
        confirm_link = f"http://127.0.0.1:8000/accounts/active/{uid}/{token}"
        email_subject = "Confirm Your Email"
        email_body = render_to_string('confirm_email.html', {'confirm_link' : confirm_link})
        
        email = EmailMultiAlternatives(email_subject , '', to=[user.email])
        email.attach_alternative(email_body, "text/html")
        email.send()
        return HttpResponse("Check your mail for confirmation")


def activate(request, uid64, token):
    try:
        uid = urlsafe_base64_decode(uid64).decode()
        user = User._default_manager.get(pk=uid)
    except(User.DoesNotExist):
        user = None 
    
    if user is not None and default_token_generator.check_token(user, token):
        user.is_active = True
        user.save()
        return redirect('login')
    else:
        return redirect('register')



class UserLoginView(LoginView):
    template_name = 'user_login.html'
    success_url = reverse_lazy('home')
    form_class = UserLoginForm

    def form_valid(self, form):
        email = form.cleaned_data['email']
        password = form.cleaned_data['password']
        user = authenticate(self.request, email=email, password=password)

        if user is not None:
            login(self.request, user)
            return redirect("home")
        else:
            print("Error occured")
            return render(self.request, self.template_name, {'form': form, 'error_message': 'Invalid login credentials'})
    

class UserLogoutView(LogoutView):
    def get_success_url(self):
        if self.request.user.is_authenticated:
            logout(self.request)
        return reverse_lazy('home')
    

class UserUpdateView(View, LoginRequiredMixin):
    template_name = 'update_account.html'

    def get(self, request):
        form = UserUpdateForm(instance=request.user.account)
        return render(request, self.template_name, {'form': form})

    def post(self, request):
        form = UserUpdateForm(request.POST, instance=request.user.account)
        if form.is_valid():
            form.save()
            return redirect('home')  # Redirect to the user's profile page
        return render(request, self.template_name, {'form': form})
    

class AddAddressView(CreateView):
    model = UserAddress
    template_name = 'add_address.html'
    form_class = AddressCreationForm
    success_url = reverse_lazy('home')

    def get_form_kwargs(self):
        kwargs = super().get_form_kwargs()
        kwargs.update({
            'user': self.request.user
        })
        
        return kwargs