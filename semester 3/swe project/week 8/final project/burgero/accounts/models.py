from django.db import models
from django.contrib.auth.models import User
from food.models import Food

class UserAddress(models.Model):
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    street_address = models.CharField(max_length=255)
    postal_code = models.IntegerField()
    city = models.CharField(max_length=200)
    country = models.CharField(max_length=100)
    phone = models.IntegerField()
    is_default = models.BooleanField()


class UserProfile(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE, related_name="account")
    full_name = models.CharField(max_length=255)
    phone_no = models.IntegerField(blank=True, null=True)
    cart = models.ManyToManyField(Food, blank=True, null=True)


    def save(self, *args, **kwargs):
        first_name, last_name = self.full_name.split(" ", 1) if " " in self.full_name else (self.full_name, '')

        self.first_name = first_name
        self.last_name = last_name

        super().save(self, *args, **kwargs)

    
    def __str__(self):
        return self.full_name