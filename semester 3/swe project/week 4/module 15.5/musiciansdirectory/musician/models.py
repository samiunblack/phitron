from django.db import models

instrument_choiches = (
    ("Guitar", "Guitar"),
    ("Violin", "Violin"),
    ("Piano", "Piano")
)

# Create your models here.
class Musician(models.Model):
    first_name = models.CharField(max_length=255)
    last_name = models.CharField(max_length=255)
    email = models.EmailField()
    phone_number = models.IntegerField(max_length=12)
    instrument_type = models.CharField(max_length=20, choices=instrument_choiches)
    