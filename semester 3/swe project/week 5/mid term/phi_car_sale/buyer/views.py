from django.shortcuts import render, redirect
from django.views.generic import CreateView, UpdateView
from django.contrib.auth.models import User
from . import forms
from django.urls import reverse_lazy
from django.contrib.auth.views import LoginView
from django.contrib.auth import logout
from django.contrib.auth.decorators import login_required
from car.models import Car

# Create your views here.
class CreateUser(CreateView):
    model = User
    form_class = forms.SignupForm
    template_name = "signup.html"
    success_url = reverse_lazy("home")
    

class Login(LoginView):
    template_name = "login.html"
    success_url = reverse_lazy("home")
    redirect_authenticated_user = False
    
class EditUser(UpdateView):
    model = User
    form_class = forms.EditProfileForm
    template_name = "edit_profile.html"
    pk_url_kwarg = 'pk'
    success_url = reverse_lazy("home")
    

def logout_view(request):
    logout(request)
    return redirect("home")

@login_required
def profile(request):
    cars = Car.objects.filter(buyers=request.user)
    return render(request, "profile.html", {"cars": cars})