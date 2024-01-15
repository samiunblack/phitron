from django import forms
from django.contrib.auth.forms import UserCreationForm
from django.contrib.auth.models import User
from .models import UserProfile, UserAddress

class UserRegistrationForm(UserCreationForm):
    full_name = forms.CharField(max_length=255)
    
    class Meta:
        model = User
        fields = ['full_name', 'username', 'email', 'password1', 'password2']
    

    def save(self, commit=True):
        user = super.save(commit=False)
        
        if commit is True:
            user.save()
            
            full_name = self.cleaned_data.get('full_name')

            UserProfile.objects.create(
                full_name=full_name,
                user=user
            )

        return user
    

class UserUpdateForm(forms.ModelForm):
    full_name = forms.CharField(max_length=255)
    phone = forms.IntegerField()

    class Meta:
        model = User
        fields = ["full_name", "phone"]
    

    def __init__(self, *args, **kwargs):
        super().__init__(*args, **kwargs)

        if self.instance:
            try:
                user_account = self.instance.account
            except UserProfile.DoesNotExist:
                user_account = None
            

            if user_account:
                self.fields['full_name'].initial = user_account.full_name
                self.fields['phone'].initial = user_account.phone


    def save(self, commit=True):
        user = super().save(commit=False)

        if commit is True:
            user.save()

            user_account, created = UserProfile.objects.get_or_create(user=user)

            user_account.full_name = self.cleaned_data['full_name']
            user_account.phone = self.cleaned_data['phone']

            user_account.save()
        
        return user
    

class AddressCreationForm(forms.ModelForm):
    class Meta: 
        model = UserAddress
        fields = ['phone', 'street_address', 'postal_code', 'city', 'country']