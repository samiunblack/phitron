from django.shortcuts import render

def cart(request):
    return render(request, 'cart.html', {'items': request.user.account.cart.all()})