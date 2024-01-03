from django.db import models
from .constants import BOOK_TYPES


class Category(models.Model):
    name = models.CharField(max_length=255)
    
    def __str__(self):
        return self.name

class Language(models.Model):
    name = models.CharField(max_length=255)
    
    def __str__(self):
        return self.name


class Book(models.Model):
    title = models.CharField(max_length=255)
    price = models.DecimalField(max_digits=12, decimal_places=2)
    author = models.CharField(max_length=255)
    description = models.TextField()
    isbn = models.IntegerField()
    genres = models.ManyToManyField(Category, related_name="genres")
    image = models.URLField()
    pages = models.IntegerField()
    first_published = models.DateField()
    language = models.ForeignKey(Language, on_delete=models.CASCADE, blank=True, null=True)
    book_type = models.CharField(choices=BOOK_TYPES, verbose_name="type", max_length=255)
    
    
    def __str__(self):
        return self.title