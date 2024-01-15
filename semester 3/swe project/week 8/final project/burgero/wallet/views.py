from django.shortcuts import render
from django.views.generic import CreateView
from .models import Transaction
from django.urls import reverse_lazy
from .forms import DepositMoneyForm

class DepositMoneyView(CreateView):
    model = Transaction
    success_url = reverse_lazy('home')
    template_name = 'deposit_money.html'
    form_class = DepositMoneyForm

    def get_form_kwargs(self):
        kwargs = super().get_form_kwargs()
        kwargs.update({
            'wallet': self.request.user.wallet
        })
        return kwargs
    
    def form_valid(self, form):
        self.request.user.wallet.balance += form.cleaned_data.get('amount')
        self.request.user.wallet.save(update_fields=['balance'])

        return super().form_valid(form)