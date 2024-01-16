from django.db import models
from django.contrib.auth.models import User
from food.models import Food

class Order(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    order_no = models.IntegerField(null=True, blank=True)
    placed_on = models.DateField(auto_now_add=True)
    items = models.ManyToManyField(Food, blank=True, related_name="orders")
    total = models.DecimalField(max_digits=12, decimal_places=2)

    def __str__(self):
        return str(self.order_no)