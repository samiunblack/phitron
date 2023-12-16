from django.db import models
from brand.models import Brand
from django.contrib.auth.models import User


class Car(models.Model):
    model = models.CharField(max_length=255)
    brand = models.ForeignKey(Brand, on_delete=models.CASCADE)
    price = models.IntegerField()
    quantity = models.IntegerField()
    image = models.ImageField(upload_to='images/')
    buyers = models.ManyToManyField(User, blank=True)
        
    def __str__(self):
        return self.model