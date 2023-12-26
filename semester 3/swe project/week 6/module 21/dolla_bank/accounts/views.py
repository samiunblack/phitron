from django.shortcuts import HttpResponseRedirect, render, redirect
from django.views.generic import FormView
from .forms import UserRegistrationForm, UserUpdateForm
from django.contrib.auth import login, logout
from django.urls import reverse_lazy
from django.contrib.auth.views import LoginView, LogoutView
from django.views import View


class UserRegistrationView(FormView):
    template_name = 'signup.html'
    form_class = UserRegistrationForm
    success_url = reverse_lazy('home')
    
    def form_valid(self, form):
        user = form.save()
        login(self.request, user)
        return HttpResponseRedirect(self.get_success_url())
    
    
class UserLoginView(LoginView):
    template_name = 'login.html'
    
    def get_success_url(self):
        return reverse_lazy('profile')


class UserLogoutView(LogoutView):
    
    def get_success_url(self):
        print(self.request.user.is_authenticated)
        if self.request.user.is_authenticated:
            logout(self.request)
            
        return reverse_lazy('profile')
    
    
class UserBankAccountUpdateView(View):
    template_name = 'profile.html'

    def get(self, request):
        form = UserUpdateForm(instance=request.user)
        return render(request, self.template_name, {'form': form})

    def post(self, request):
        form = UserUpdateForm(request.POST, instance=request.user)
        if form.is_valid():
            form.save()
            return redirect('profile')  # Redirect to the user's profile page
        return render(request, self.template_name, {'form': form})
    