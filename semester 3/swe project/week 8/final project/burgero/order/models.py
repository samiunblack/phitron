from django.db import models
from django.contrib.auth.models import User
from food.models import Food

class Order(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    order_no = models.IntegerField()
    placed_on = models.DateField()
    items = models.ManyToManyField(Food)
    total = models.DecimalField(max_digits=12, decimal_places=2)