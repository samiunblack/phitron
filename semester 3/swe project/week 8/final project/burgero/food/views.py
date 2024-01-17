from django.shortcuts import render, get_object_or_404, redirect
from .models import Food
from django.contrib.auth.decorators import login_required

@login_required
def add_to_cart(request, pk):
    food = get_object_or_404(Food, pk=pk)
    request.user.account.cart.add(food)

    return redirect("cart")

@login_required
def remove_from_cart(request, pk):
    food = get_object_or_404(Food, pk=pk)
    request.user.account.cart.remove(food)


    return redirect("cart")