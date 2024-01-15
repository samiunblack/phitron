from django.shortcuts import render, redirect
from .models import Order
from wallet.models import Transaction

def cart(request):
    return render(request, 'cart.html', {'items': request.user.account.cart.all()})


def place_order(request):
    total = 0
    for item in request.user.account.cart.all():
        total += item.price
    
    
    if(total < request.user.wallet.balance):
        request.user.wallet.balance -= total
        request.user.wallet.save(update_fields=['balance'])

        transaction = Transaction.objects.create(amount=total, transaction_type='Pay', wallet=request.user.wallet)
        transaction.payment_id = 100000 + transaction.pk
        transaction.save(update_fields=['payment_id'])

        order = Order.objects.create(user=request.user, total=total)
        
        for item in request.user.account.cart.all():
            order.items.add(item)
        
        order.order_no = 100000 + order.pk
        order.save(update_fields=['order_no'])

        request.user.account.cart.clear()

    else:
        return redirect("deposit_money")

    return redirect("home")