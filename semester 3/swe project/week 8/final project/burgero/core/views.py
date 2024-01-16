from django.shortcuts import render
from food.models import Food
from review.models import Review
# Create your views here.
def home(request):
    foods = Food.objects.filter(is_discount=False)
    discounted_foods = Food.objects.filter(is_discount=True)
    reviews = Review.objects.all()
    return render(request, 'home.html', {'foods': foods, 'discounted_foods': discounted_foods, 'reviews': reviews})