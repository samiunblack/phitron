from django.urls import path
from demo_app.views import courses

urlpatterns = [
    path("course/", courses)
]
