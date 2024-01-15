from django.urls import path
from .views import AddReviewView

urlpatterns = [
    path('review/<int:pk>/', AddReviewView.as_view(), name="review")
]
