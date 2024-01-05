from django.db import models

# Create your models here.
class Bank(models.Model):
    name = models.CharField(unique=True, max_length=255)
    is_bankrupt = models.BooleanField(default=False)