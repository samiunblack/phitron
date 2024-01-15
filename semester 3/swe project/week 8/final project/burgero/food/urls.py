from django.urls import path
from .views import add_to_cart

urlpatterns = [
    path('add-to-cart/<int:pk>/',  add_to_cart, name="add_to_cart")
]
