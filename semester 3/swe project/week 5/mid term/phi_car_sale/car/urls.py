from django.urls import path
from . import views

urlpatterns = [
    path("car_detail/<int:pk>/", views.CarDetail.as_view() , name="car_detail"),
    path("buy_car/<int:pk>/", views.update_quantity , name="buy_car"),
]