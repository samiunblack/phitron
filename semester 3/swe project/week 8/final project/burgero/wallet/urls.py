from django.urls import path
from .views import DepositMoneyView
urlpatterns = [
    path('deposit-money/', DepositMoneyView.as_view(), name='deposit_money'),
]