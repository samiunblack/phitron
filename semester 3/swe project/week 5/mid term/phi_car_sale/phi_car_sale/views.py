from django.shortcuts import render
from car.models import Car

def home(request):
    cars = Car.objects.all()
    return render(request, "main.html", {"cars": cars})