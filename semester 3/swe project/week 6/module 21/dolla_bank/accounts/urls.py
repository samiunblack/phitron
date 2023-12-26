from django.urls import path
from . import views

urlpatterns = [
    path("signup/", views.UserRegistrationView.as_view(), name="signup"),
    path("profile/", views.UserBankAccountUpdateView.as_view(), name="profile"),
    path("login/", views.UserLoginView.as_view(), name="login"),
    path("logout/", views.UserLogoutView.as_view(), name="logout"),
]
