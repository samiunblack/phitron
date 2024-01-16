from django.urls import path
from .views import DepositMoneyView, PaymentReportView
urlpatterns = [
    path('deposit-money/', DepositMoneyView.as_view(), name='deposit_money'),
    path('payment-history/', PaymentReportView.as_view(), name="payment_history"),
]