from django.urls import path
from .views import cart, place_order, OrderHistoryView

urlpatterns = [
    path('cart/', cart, name="cart"),
    path('checkout/', place_order, name="checkout"),
    path('order-history/', OrderHistoryView.as_view() , name="order_history"),
]
