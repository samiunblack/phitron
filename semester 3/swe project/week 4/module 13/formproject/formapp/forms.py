from django import forms

class contactForm(forms.Form):
    name = forms.CharField(label="NAME", initial="Rahim", widget= forms.TextInput(attrs={'class': 'bg-primary'}))
    email = forms.EmailField(help_text="Enter your name")

    password = forms.CharField(widget=forms.PasswordInput())