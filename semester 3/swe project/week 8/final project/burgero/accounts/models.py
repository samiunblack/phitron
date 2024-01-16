from django.db import models
from django.contrib.auth.models import User
from food.models import Food
import random
import string

class UserAddress(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE, related_name="address_book")
    street_address = models.CharField(max_length=255)
    postal_code = models.IntegerField()
    city = models.CharField(max_length=200)
    country = models.CharField(max_length=100)


    def __str__(self):
        return self.name


class UserProfile(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE, related_name="account")
    full_name = models.CharField(max_length=255)
    phone_no = models.IntegerField(blank=True, null=True, verbose_name="phone")
    cart = models.ManyToManyField(Food, blank=True)


    def save(self, *args, **kwargs):
        first_name, last_name = self.full_name.split(" ", 1) if " " in self.full_name else (self.full_name, '')
        username = ("").join(self.full_name.split(" ")) + ''.join(random.choice(string.ascii_letters) for i in range(8))

        self.user.first_name = first_name
        self.user.last_name = last_name
        self.user.username = username

        self.user.save(update_fields=['first_name', 'last_name', 'username'])
        super(UserProfile, self).save(*args, **kwargs)

    
    def __str__(self):
        return self.full_name