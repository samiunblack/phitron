from django import forms
from django.contrib.auth.forms import UserCreationForm
from django.contrib.auth.models import User
from .models import UserProfile, UserAddress
from wallet.models import Wallet

class UserRegistrationForm(UserCreationForm):
    full_name = forms.CharField(max_length=255)
    
    class Meta:
        model = User
        fields = ['full_name', 'email', 'password1', 'password2']
    

    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)

        for field in self.fields:
            self.fields[field].widget.attrs.update({
                
                'class' : (
                    'appearance-none block w-full '
                    'text-gray-700 border border-red-700 rounded '
                    'py-3 px-4 leading-tight focus:outline-none '
                    'shadow-none'
                ) 
            })



    def save(self, commit=True):
        user = super().save(commit=False)
        
        if commit is True:
            user.save()
            
            full_name = self.cleaned_data.get('full_name')

            UserProfile.objects.create(
                full_name=full_name,
                user=user
            )

            Wallet.objects.create(user=user, balance=0.00)

        return user
    

class UserLoginForm(forms.Form):
    email = forms.EmailField()
    password = forms.CharField(widget=forms.PasswordInput())

    def __init__(self, *args, **kwargs):
        self.request = kwargs.pop('request', None)
        super(UserLoginForm, self).__init__(*args, **kwargs)

        for field in self.fields:
            self.fields[field].widget.attrs.update({
                
                'class' : (
                    'appearance-none block w-full '
                    'text-gray-700 border border-red-700 rounded '
                    'py-3 px-4 leading-tight focus:outline-none '
                    'shadow-none'
                ) 
            })
    

class UserUpdateForm(forms.ModelForm):
    class Meta:
        model = UserProfile
        fields = ["full_name", "phone_no"]
    

    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)

        if self.instance:
            try:
                user_account = self.instance
            except UserProfile.DoesNotExist:
                user_account = None
            

            if user_account:
                self.fields['full_name'].initial = user_account.full_name
                self.fields['phone_no'].initial = user_account.phone_no


        for field in self.fields:
            self.fields[field].widget.attrs.update({
                
                'class' : (
                    'appearance-none block w-full '
                    'text-gray-700 border border-red-700 bg-zinc-50 rounded '
                    'py-3 px-4 leading-tight focus:outline-none '
                    'focus:bg-zinc-50 shadow-none'
                ) 
            })


    def save(self, commit=True):
        user_account = super().save(commit=False)

        if commit is True:
            user_account.save()

            user_account.full_name = self.cleaned_data['full_name']
            user_account.phone = self.cleaned_data['phone_no']

            user_account.save()
        
        return user_account
    

class AddressCreationForm(forms.ModelForm):
    class Meta: 
        model = UserAddress
        fields = ['street_address', 'postal_code', 'city', 'country']

    def __init__(self, *args, **kwargs):
        self.user = kwargs.pop('user')
        super(AddressCreationForm, self).__init__(*args, **kwargs)

        for field in self.fields:
            self.fields[field].widget.attrs.update({
                
                'class' : (
                    'appearance-none block w-full '
                    'text-gray-700 border border-red-700 bg-zinc-50 rounded '
                    'py-3 px-4 leading-tight focus:outline-none '
                    'focus:bg-zinc-50 shadow-none'
                ) 
            })

    def save(self, commit=True):
        self.instance.user = self.user
        return super().save()