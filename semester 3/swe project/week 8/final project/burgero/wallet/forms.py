from django import forms
from .models import Transaction

class DepositMoneyForm(forms.ModelForm):
    class Meta:
        model = Transaction
        fields = ['amount']

    
    def __init__(self, *args, **kwargs):
        self.wallet = kwargs.pop('wallet')
        super().__init__(*args, **kwargs)

    
    def save(self, commit=True):
        transaction = super.save(commit=False)

        if commit is True:
            transaction.wallet = self.wallet
            transaction.transaction_type = 'Deposit'
            transaction.payment_id = 100000 + transaction.id

            transaction.save()
        
        return transaction