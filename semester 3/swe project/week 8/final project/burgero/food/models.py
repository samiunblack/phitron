from django.db import models

class Category(models.Model):
    name = models.CharField(max_length=255)


class Food(models.Model):
    name = models.CharField(max_length=100)
    description = models.TextField()
    price = models.DecimalField(max_digits=12, decimal_places=2)
    image = models.URLField()
    is_discount = models.BooleanField(blank=True, default=False)
    discount_price = models.DecimalField(max_digits=12, decimal_places=2, blank=True, null=True)
    category = models.ManyToManyField(Category)
    quantity = models.IntegerField(blank=True, default=0, null=True)

    def average_rating(self):
        ratings = self.review.all()
        if ratings:
            total_rating = sum([review.rating for review in ratings])
            return total_rating // len(ratings)
        else:
            return 0


    def __str__(self):
        return self.name