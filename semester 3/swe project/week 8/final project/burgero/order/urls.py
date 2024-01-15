from django.urls import path
from .views import cart, place_order

urlpatterns = [
    path('cart/', cart, name="cart"),
    path('checkout/', place_order, name="checkout"),
]
