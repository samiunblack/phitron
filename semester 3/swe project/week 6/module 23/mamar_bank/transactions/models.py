from django.db import models
from accounts.models import UserBankAccount
# Create your models here.
from .constants import TRANSACTION_TYPE

class Transaction(models.Model):
    account = models.ForeignKey(UserBankAccount, related_name = 'transactions', on_delete = models.CASCADE) # ekjon user er multiple transactions hote pare
    
    amount = models.DecimalField(decimal_places=2, max_digits = 12)
    balance_after_transaction = models.DecimalField(decimal_places=2, max_digits = 12)
    transaction_type = models.IntegerField(choices=TRANSACTION_TYPE, null = True)
    timestamp = models.DateTimeField(auto_now_add=True)
    loan_approve = models.BooleanField(default=False) 
    
    
    
    class Meta:
        ordering = ['timestamp'] 
        
        
class Transfer(models.Model):
    sender_account = models.ForeignKey(UserBankAccount, related_name='transfers_sent', on_delete=models.CASCADE, blank=True, null=True)
    receiver_account = models.ForeignKey(UserBankAccount, related_name='transfers_received', on_delete=models.CASCADE, blank=True, null=True)
    amount = models.DecimalField(decimal_places=2, max_digits=12, blank=True, null=True)
    timestamp = models.DateTimeField(auto_now_add=True, blank=True, null=True)
        