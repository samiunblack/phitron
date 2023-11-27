from django.urls import path, include
from firstapp.views import *

urlpatterns = [
    path('', home)
]