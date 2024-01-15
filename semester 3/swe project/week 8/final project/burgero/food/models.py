from django.db import models


class Food(models.Model):
    name = models.CharField(max_length=100)
    description = models.TextField()
    price = models.DecimalField(max_digits=12, decimal_places=2)
    image = models.URLField()
    is_discount = models.BooleanField(blank=True, default=False)
    discount_price = models.DecimalField(max_digits=12, decimal_places=2, blank=True, null=True)


    def __str__(self):
        return self.name