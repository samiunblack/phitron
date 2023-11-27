from django.urls import path
from navigation.views import *

urlpatterns = [
    path('', navigations),
    path('about/', about),
    path('contact/', contact),
]