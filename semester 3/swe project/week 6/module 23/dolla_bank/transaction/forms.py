from django import forms
from .models import Transaction, Transfer
from .constants import DEPOSIT, WITHDRAWAL, LOAN, LOAN_PAID


class DepositForm(forms.ModelForm):
    class Meta:
        model = Transaction
        fields = ["amount"]
        
    def __init__(self, *args, **kwargs):
        self.account = kwargs.pop('account')
        super().__init__(*args, **kwargs)
        
    def save(self, commit=True):
        self.instance.account = self.account
        self.instance.balance_after_transaction = self.account.balance
        self.instance.transaction_type = DEPOSIT
        
        return super().save()
    
class WithdrawForm(forms.ModelForm):
    class Meta:
        model = Transaction
        fields = ["amount"]
        
    def __init__(self, *args, **kwargs):
        self.account = kwargs.pop('account')
        super().__init__(*args, **kwargs)
        
    def save(self, commit=True):
        self.instance.account = self.account
        self.instance.balance_after_transaction = self.account.balance
        self.instance.transaction_type = WITHDRAWAL
        
        return super().save()
    
    
class LoanRequestForm(forms.ModelForm):
    class Meta:
        model = Transaction
        fields = ["amount"]
        
    def __init__(self, *args, **kwargs):
        self.account = kwargs.pop('account')
        super().__init__(*args, **kwargs)
        
    def save(self, commit=True):
        self.instance.account = self.account
        self.instance.balance_after_transaction = self.account.balance
        self.instance.transaction_type = LOAN
        
        return super().save()
    
    
class TransferForm(forms.ModelForm):
    class Meta:
        model = Transfer
        fields = ["reciever", "amount"]
        
    
    def __init__(self, *args, **kwargs):
        self.account = kwargs.pop('account')
        super().__init__(*args, **kwargs)
        
    
    def save(self, commit=True):
        self.instance.sender = self.account
        return super().save()