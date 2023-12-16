from django.db import models
from car.models import Car

# Create your models here.
class Comment(models.Model):
    name = models.CharField(max_length=255)
    comment = models.TextField()
    car = models.ForeignKey(Car, on_delete=models.CASCADE, related_name="comments")
    created_on = models.DateTimeField(auto_now_add=True)
    
    def __str__(self):
        return self.comment