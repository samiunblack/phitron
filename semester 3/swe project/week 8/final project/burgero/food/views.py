from django.shortcuts import render, get_object_or_404, redirect
from .models import Food


def add_to_cart(request, pk):
    food = get_object_or_404(Food, pk=pk)
    request.user.account.cart.add(food)
    food.quantity += 1
    food.save(update_fields=['quantity'])

    return redirect("cart")


def remove_from_cart(request, pk):
    food = get_object_or_404(Food, pk=pk)
    request.user.account.cart.remove(food)

    food.quantity = 0
    food.save(update_fields=['quantity'])

    return redirect("cart")