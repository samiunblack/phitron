from django.urls import path
from . import views

urlpatterns = [
    path('accounts/signup/', views.CreateUser.as_view(), name="signup"),
    path('accounts/login/', views.Login.as_view(), name="login"),
    path('accounts/profile/', views.profile, name="profile"),
    path('accounts/logout/', views.logout_view, name="logout"),
    path('accounts/edit_profile/<int:pk>', views.EditUser.as_view(), name="edit_profile"),
]