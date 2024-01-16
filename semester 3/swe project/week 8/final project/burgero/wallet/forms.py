from django import forms
from .models import Transaction

class DepositMoneyForm(forms.ModelForm):
    class Meta:
        model = Transaction
        fields = ['amount']

    
    def __init__(self, *args, **kwargs):
        self.wallet = kwargs.pop('wallet')
        super().__init__(*args, **kwargs)

        for field in self.fields:
            self.fields[field].widget.attrs.update({
                
                'class' : (
                    'appearance-none block w-full '
                    'text-gray-700 border border-red-700 rounded '
                    'py-3 px-4 leading-tight focus:outline-none '
                    'shadow-none bg-zinc-50'
                ) 
            })

    
    def save(self, commit=True):
        transaction = super().save()

        
        transaction.wallet = self.wallet
        transaction.transaction_type = 'Deposit'
        transaction.payment_id = 100000 + transaction.id

        transaction.save()
        
        return transaction