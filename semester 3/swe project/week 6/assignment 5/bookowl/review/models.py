from django.db import models
from django.contrib.auth.models import User
from book.models import Book

# Create your models here.
class Review(models.Model):
    book = models.ForeignKey(Book, on_delete=models.CASCADE, related_name="reviews", blank=True, null=True)
    text = models.TextField()
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    created_on = models.DateField(auto_now_add=True)
        
    def __str__(self):
        return self.text