from django.contrib import messages
from django.contrib.auth.mixins import LoginRequiredMixin
from django.urls import reverse_lazy
from django.utils import timezone
from django.shortcuts import get_object_or_404, redirect
from django.views import View
from django.http import HttpResponse
from django.views.generic import CreateView, ListView
from transaction.constants import DEPOSIT, WITHDRAWAL,LOAN, LOAN_PAID
from django.core.mail import EmailMessage, EmailMultiAlternatives
from django.template.loader import render_to_string
from datetime import datetime
from django.db.models import Sum
from transaction.forms import (
    DepositForm,
    WithdrawForm,
    LoanRequestForm,
    TransferForm,
)
from transaction.models import Transaction
from bank.models import Bank


def send_transaction_email(user, amount, subject, template):
        message = render_to_string(template, {
            'user' : user,
            'amount' : amount,
        })
        send_email = EmailMultiAlternatives(subject, '', to=[user.email])
        send_email.attach_alternative(message, "text/html")
        send_email.send()


# Create your views here.

class DepositMoneyView(LoginRequiredMixin, CreateView):
    form_class = DepositForm
    template_name = 'deposit.html'
    success_url = reverse_lazy("transaction_report")
    
    def get_form_kwargs(self):
        kwargs = super().get_form_kwargs()
        kwargs.update({
            'account': self.request.user.account
        })
        return kwargs
    
    
    def form_valid(self, form):
        amount = form.cleaned_data.get('amount')
        account = self.request.user.account
        account.balance += amount
        account.save(
            update_fields=[
                'balance'
            ]
        )

        messages.success(
            self.request,
            f'{"{:,.2f}".format(float(amount))}$ was deposited to your account successfully'
        )
        send_transaction_email(self.request.user, amount, "Deposite Message", "deposit_email.html")
        return super().form_valid(form)
    
    
    
class WithdrawMoneyView(LoginRequiredMixin, CreateView):
    form_class = WithdrawForm
    template_name = 'withdraw.html'
    success_url = reverse_lazy("transaction_report")
    
    def get_form_kwargs(self):
        kwargs = super().get_form_kwargs()
        kwargs.update({
            'account': self.request.user.account
        })
        return kwargs
    
    
    def form_valid(self, form):
        amount = form.cleaned_data.get('amount')
        account = self.request.user.account
        bank = Bank.objects.get(name="Dolla")
        
        if bank.is_bankrupt is True:
            messages.error(self.request, "Bank has gone bankrupt.")
            return redirect("home")
        
        if(amount < account.balance):
            account.balance -= amount
            account.save(
                update_fields=[
                    'balance'
                ]
            )

            messages.success(
                self.request,
                f'{"{:,.2f}".format(float(amount))}$ was withdrawn to your account successfully'
                
            )
            send_transaction_email(self.request.user, amount, "Withdrawal Message", "withdrawal_email.html")
            return super().form_valid(form)
        else:
            messages.error(self.request, "Withdraw amount more than acccount balance.")
            return redirect("home")
        

class TransferMoneyView(CreateView, LoginRequiredMixin):
    form_class = TransferForm
    template_name = 'transfer.html'
    success_url = reverse_lazy("home")
    
    def get_form_kwargs(self):
        kwargs = super().get_form_kwargs()
        kwargs.update({
            'account': self.request.user.account
        })
        return kwargs
    
    def form_valid(self, form):
        amount = form.cleaned_data.get('amount')
        reciever = form.cleaned_data.get('reciever')
        account = self.request.user.account
        bank = Bank.objects.get(name="Dolla")
        
        if bank.is_bankrupt is True:
            messages.error(self.request, "Bank has gone bankrupt.")
            return redirect("home")
        
        if(amount < account.balance):
            account.balance -= amount
            reciever.account.balance += amount
            account.save(
                update_fields=[
                    'balance'
                ]
            )
            reciever.account.save(update_fields=['balance'])

            messages.success(
                self.request,
                f'{"{:,.2f}".format(float(amount))}$ was transfered from your account successfully'
                
            )
            send_transaction_email(self.request.user, amount, "Transfer Message", "transfer_email.html")
            send_transaction_email(reciever, amount, "Transfer Message", "transfer_email.html")
            return super().form_valid(form)
        else:
            messages.error(self.request, "Withdraw amount more than acccount balance.")
            return redirect("home")
    
    
    
class LoanRequestView(LoginRequiredMixin, CreateView):
    form_class = LoanRequestForm
    template_name = 'loan_request.html'
    success_url = reverse_lazy("transaction_report")
    

    def form_valid(self, form):
        amount = form.cleaned_data.get('amount')
        messages.success(
            self.request,
            f'Loan request for {"{:,.2f}".format(float(amount))}$ submitted successfully'
        )
        send_transaction_email(self.request.user, amount, "Loan Request Message", "loan_email.html")
        return super().form_valid(form)
    

class TransactionReportView(LoginRequiredMixin, ListView):
    template_name = 'report.html'
    model = Transaction
    balance = 0
    
    def get_queryset(self):
        queryset = super().get_queryset().filter(
            account=self.request.user.account
        )
        start_date_str = self.request.GET.get('start_date')
        end_date_str = self.request.GET.get('end_date')
        
        if start_date_str and end_date_str:
            start_date = datetime.strptime(start_date_str, '%Y-%m-%d').date()
            end_date = datetime.strptime(end_date_str, '%Y-%m-%d').date()
            
            queryset = queryset.filter(timestamp__date__gte=start_date, timestamp__date__lte=end_date)
            self.balance = Transaction.objects.filter(
                timestamp__date__gte=start_date, timestamp__date__lte=end_date
            ).aggregate(Sum('amount'))['amount__sum']
        else:
            self.balance = self.request.user.account.balance
            
            
class PayLoanView(LoginRequiredMixin, View):
    def get(self, request, loan_id):
        loan = get_object_or_404(Transaction, id=loan_id)
        print(loan)
        if loan.loan_approve:
            user_account = loan.account
            if loan.amount < user_account.balance:
                user_account.balance -= loan.amount
                loan.balance_after_transaction = user_account.balance
                user_account.save()
                loan.loan_approved = True
                loan.transaction_type = LOAN_PAID
                loan.save()
                return redirect('transactions:loan_list')
            else:
                messages.error(
            self.request,
            'Loan amount is greater than available balance'
        )

        return redirect('loan_list')


class LoanListView(LoginRequiredMixin,ListView):
    model = Transaction
    template_name = 'loan_list.html'
    context_object_name = 'loans' # loan list ta ei loans context er moddhe thakbe
    
    def get_queryset(self):
        user_account = self.request.user.account
        queryset = Transaction.objects.filter(account=user_account,transaction_type=3)
        print(queryset)
        return queryset
    
    
