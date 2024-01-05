from django.db import models
from .constants import TRANSACTION_TYPE
from accounts.models import UserBankAccount
from django.contrib.auth.models import User

# Create your models here.
class Transaction(models.Model):
    account = models.ForeignKey(UserBankAccount, related_name = 'transactions', on_delete = models.CASCADE)
    amount = models.DecimalField(decimal_places=2, max_digits = 12)
    balance_after_transaction = models.DecimalField(decimal_places=2, max_digits = 12)
    transaction_type = models.IntegerField(choices=TRANSACTION_TYPE, null = True)
    timestamp = models.DateTimeField(auto_now_add=True)
    loan_approve = models.BooleanField(default=False) 
    
    class Meta:
        ordering = ['timestamp'] 
        
        
class Transfer(models.Model):
    sender = models.ForeignKey(UserBankAccount, related_name="transfer_sender", on_delete=models.CASCADE)
    reciever = models.ForeignKey(User, related_name="transfer_reciever", on_delete=models.CASCADE)
    timestamp = models.DateTimeField(auto_now_add=True)
    amount = models.DecimalField(decimal_places=2, max_digits=12)
    
    class Meta:
        ordering = ['timestamp']