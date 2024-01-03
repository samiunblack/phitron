from django.urls import path
from . import views
 
urlpatterns = [
    path('deposit/', views.DepositView.as_view(), name='deposit_money'),
    path('transaction-report/', views.TransactionReportView.as_view(), name="transaction_report"),
]