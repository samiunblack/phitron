from django.db import models
from django.contrib.auth.models import User
from .constants import ACCOUNT_TYPES, GENDER_TYPES

class UserAddress(models.Model):
    street_address = models.CharField(max_length=100)
    city = models.CharField(max_length=50)
    postal_code = models.IntegerField()
    country = models.CharField(max_length=50)
    user = models.OneToOneField(User, on_delete=models.CASCADE, related_name="address")
    
    def __str__(self):
        return f'{self.city}, {self.country}'


class UserBankAccount(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE, related_name="account")
    account_type = models.CharField(choices=ACCOUNT_TYPES, max_length=10)
    account_no = models.IntegerField(unique=True)
    birth_date = models.DateField(null=True, blank=True)
    gender = models.CharField(max_length=10, choices=GENDER_TYPES)
    initial_deposit_date = models.DateField(auto_now_add=True)
    balance = models.DecimalField(default=0.0, max_digits=12, decimal_places=2)
    
    
    def __str__(self):
        return str(self.account_no)    