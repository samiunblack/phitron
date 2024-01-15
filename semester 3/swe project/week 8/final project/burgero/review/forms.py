from django import forms
from .models import Review


class ReviewForm(forms.ModelForm):
    class Meta:
        model = Review
        fields = ['heading', 'review']

    def __init__(self, *args, **kwargs):
        self.user = kwargs.pop('user')
        self.food = kwargs.pop('food')
        self.rating = kwargs.pop('rating')
        super().__init__(*args, **kwargs)

    def save(self, commit=True):
        review = super.save(commit=False)

        if commit is True:
            review.user = self.user
            review.item = self.food
            review.rating = self.rating
        
            review.save()

        return review