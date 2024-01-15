from django.urls import path
from .views import cart

urlpatterns = [
    path('cart', cart, name="cart"),
]
