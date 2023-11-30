from django.urls import path
from . import views

urlpatterns = [
    path('', views.home),
    path('about/<int:id>/', views.about, name="about")
]
