from django.shortcuts import get_object_or_404, redirect
from .forms import AddCommentForm
from car.models import Car

# Create your views here.
def add_comment(request, pk):
    form = AddCommentForm()
    
    if request.method == "POST":
        form = AddCommentForm(request.POST)
        
        if form.is_valid():
            comment = form.save()
            comment.car = get_object_or_404(Car, pk=pk)
            comment.save()
            
    return redirect("car_detail", pk=pk)