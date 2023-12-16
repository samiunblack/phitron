from django.shortcuts import render
from car.models import Car
from brand.models import Brand

def home(request, brand_name = None):
    cars = Car.objects.all()
    brands = Brand.objects.all()
    
    if brand_name is not None:
        cars = Car.objects.filter(brand__name=brand_name)
    
    return render(request, "main.html", {"cars": cars, "brands": brands})