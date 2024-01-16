from django.db import models
from django.contrib.auth.models import User
from food.models import Food

# Create your models here.
class Review(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    rating = models.IntegerField(default=0)
    heading = models.CharField(max_length=100, verbose_name="Title")
    review = models.TextField()
    date = models.DateField(auto_now_add=True)
    item = models.ForeignKey(Food, on_delete=models.CASCADE, related_name="review")

    def __str__(self):
        return self.user.username