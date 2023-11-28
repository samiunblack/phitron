from django.urls import path
from practiceapp.views import home

urlpatterns = [
    path('', home),  
]