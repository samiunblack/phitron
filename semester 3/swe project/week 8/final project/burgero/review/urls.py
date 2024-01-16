from django.urls import path
from .views import AddReviewView, ReviewListView

urlpatterns = [
    path('review/<int:pk>/', AddReviewView.as_view(), name="review"),
    path('reviews/', ReviewListView.as_view(), name="reviews")
]
