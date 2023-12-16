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
    phone_number = models.IntegerField()
    instrument_type = models.CharField(max_length=20, choices=instrument_choiches)
    
    
    def __str__(self):
        return f'{self.first_name} {self.last_name}'