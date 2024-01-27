from django import forms
from .models import ReviewModel


class ReviewForm(forms.ModelForm):
    class Meta:
        model = ReviewModel
        fields = ['heading', 'review', 'rating']

    def __init__(self, *args, **kwargs):
        self.user = kwargs.pop('user')
        self.food = kwargs.pop('food')
        super().__init__(*args, **kwargs)

        for field in self.fields:
            self.fields[field].widget.attrs.update({
                
                'class' : (
                    'appearance-none block w-full '
                    'text-gray-700 border border-red-700 bg-zinc-50 rounded '
                    'py-3 px-4 leading-tight focus:outline-none '
                    'focus:bg-zinc-50 shadow-none'
                ) 
            })
        
        self.fields['review'].widget.attrs.update({
            'class': (
                'appearance-none block w-full '
                'text-gray-700 border border-red-700 bg-zinc-50 rounded '
                'py-3 px-4 leading-tight focus:outline-none '
                'focus:bg-zinc-50 shadow-none'
                ' h-40'
            )
        })

    def save(self, commit=True):
        review = super().save(commit=False)

        if commit is True:
            review.user = self.user
            review.item = self.food
        
            review.save()

        return review