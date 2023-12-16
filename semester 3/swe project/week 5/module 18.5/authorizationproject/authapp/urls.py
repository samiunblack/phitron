from django.urls import path
from authapp import views

urlpatterns = [
    path("", views.home, name="home"),
    path('signup/', views.signup, name="signup"),
    path('login/', views.login_req, name="login"),
    path('logout/', views.logout_req, name="logout"),
    path('profile/', views.profile, name="profile"),
    path('reset_password/', views.reset_pass, name="reset_pass"),
    path('forgot_password/', views.forgot_pass, name="forgot_pass"),
    path('edit_profile/', views.edit_profile, name="edit_profile"),
]