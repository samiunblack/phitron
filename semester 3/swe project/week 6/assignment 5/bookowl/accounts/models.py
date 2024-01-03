from django.db import models
from django.contrib.auth.models import User
from book.models import Book
from .constants import PFP_CHOICES
import random


class UserAccount(models.Model):
    user = models.OneToOneField(User, related_name='account', on_delete=models.CASCADE)
    balance = models.DecimalField(default=0, max_digits=12, decimal_places=2)
    borrowed_books = models.ManyToManyField(Book, related_name="books")
    pfp =  models.URLField(choices=PFP_CHOICES, default=None, blank=True, null=True)
    created_on = models.DateField(auto_now_add=True, null=True, blank=True)
    
    def save(self, *args, **kwargs):
        if not self.pfp:
            # note sure for the syntax of this random choices
            self.pfp = random.choices(PFP_CHOICES)[0][0]
        super(UserAccount, self).save(*args, **kwargs)
    
    def __str__(self):
        return f'{self.user.first_name} {self.user.last_name}'
    