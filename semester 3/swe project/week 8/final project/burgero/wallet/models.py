from django.db import models
from django.contrib.auth.models import User
from .constants import TRANSACTION_TYPES


class Wallet(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE, related_name="wallet")
    balance = models.DecimalField(max_digits=12, decimal_places=2)

    def __str__(self):
        return self.user.account.full_name


class Transaction(models.Model):
    wallet = models.ForeignKey(Wallet, on_delete=models.CASCADE, null=True)
    transaction_type = models.CharField(choices=TRANSACTION_TYPES, max_length=100, null=True)
    payment_id = models.IntegerField(null=True)
    date = models.DateField(auto_now_add=True)
    amount = models.DecimalField(max_digits=12, decimal_places=2)

    def __str__(self):
        return self.wallet.user.account.full_name