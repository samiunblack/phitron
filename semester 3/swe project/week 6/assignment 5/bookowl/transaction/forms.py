from django.forms import ModelForm
from .models import Transaction
from .constants import DEPOSIT


class DepositForm(ModelForm):
    class Meta:
        model = Transaction
        fields = ['amount']
        
    def __init__(self, *args, **kwargs):
        self.account = kwargs.pop('account')
        super().__init__(*args, **kwargs)
        
    def save(self, commit=True):
        transaction = super().save(commit=False)
        transaction.user = self.account
        transaction.transaction_type = DEPOSIT
        transaction.balance_after_transaction = self.account.balance
        
        transaction.save()

        return transaction
        
        