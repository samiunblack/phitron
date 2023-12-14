from django.contrib.auth.models import User
from django.contrib.auth.forms import UserCreationForm, UserChangeForm
from django import forms

class RegistrationForm(UserCreationForm):
    email = forms.EmailField(widget=forms.EmailInput(attrs={"id": "required"})) 
    first_name = forms.CharField(widget=forms.TextInput(attrs={"id": "required"})) 
    last_name = forms.CharField(widget=forms.TextInput(attrs={"id": "required"})) 
    
    class Meta:
        model = User
        fields = ['username', 'email', 'first_name', 'last_name']
        

class EditProfileForm(UserChangeForm):
    class Meta:
        model = User
        fields = ['email', 'first_name', 'last_name']
        