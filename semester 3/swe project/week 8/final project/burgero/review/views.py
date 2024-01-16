from typing import Any
from django.shortcuts import render, get_object_or_404
from django.views.generic import CreateView, ListView
from .models import Review
from .forms import ReviewForm
from django.urls import reverse_lazy
from food.models import Food


class AddReviewView(CreateView):
    model = Review
    form_class = ReviewForm
    template_name = 'add_review.html'
    success_url = reverse_lazy('home')
    pk_url_kwarg = 'pk'

    def get_form_kwargs(self):
        food_pk = self.kwargs.get(self.pk_url_kwarg)
        food = get_object_or_404(Food, pk=food_pk)
        kwargs = super().get_form_kwargs()
        kwargs.update({
            'user': self.request.user,
            'food': food,
        })

        return kwargs
    
    def get_context_data(self, **kwargs: Any):
        food_pk = self.kwargs.get(self.pk_url_kwarg)
        food = get_object_or_404(Food, pk=food_pk)
        context = super().get_context_data(**kwargs)
        context.update({
            'food': food,
        })
        return context
    

class ReviewListView(ListView):
    template_name = 'reviews.html'
    model = Review
    
    def get_queryset(self):
        queryset = super().get_queryset().filter(
            user=self.request.user
        )
       
        return queryset