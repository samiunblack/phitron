from django.views.generic import CreateView, ListView
from .models import Transaction
from django.urls import reverse_lazy
from .forms import DepositMoneyForm
from django.contrib.auth.mixins import LoginRequiredMixin

class DepositMoneyView(CreateView, LoginRequiredMixin):
    model = Transaction
    success_url = reverse_lazy('profile')
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
    

class PaymentReportView(ListView, LoginRequiredMixin):
    template_name = 'payments_report.html'
    model = Transaction
    
    def get_queryset(self):
        queryset = super().get_queryset().filter(
            wallet=self.request.user.wallet
        ).order_by('-date')
       
        return queryset