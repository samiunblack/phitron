from django.shortcuts import render, get_object_or_404
from food.models import Food, Category
from review.models import ReviewModel

def home(request):
    categories = Category.objects.all()
    foods = Food.objects.filter(is_discount=False)
    discounted_foods = Food.objects.filter(is_discount=True)
    reviews = ReviewModel.objects.all()
    return render(request, 'home.html', {'foods': foods, 'discounted_foods': discounted_foods, 'reviews': reviews, 'categories': categories})


def category_filter(request, category):
    categories = Category.objects.all()
    category = get_object_or_404(Category, name=category)
    foods = Food.objects.filter(is_discount=False, category=category)
    discounted_foods = Food.objects.filter(is_discount=True)
    reviews = ReviewModel.objects.all()
    return render(request, 'home.html', {'foods': foods, 'discounted_foods': discounted_foods, 'reviews': reviews, 'categories': categories})
    