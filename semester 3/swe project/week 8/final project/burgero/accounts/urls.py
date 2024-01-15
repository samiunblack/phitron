from django.urls import path
from .views import UserRegistrationView, UserLoginView, UserLogoutView, activate
 
urlpatterns = [
    path('register/', UserRegistrationView.as_view(), name='register'),
    path('login/', UserLoginView.as_view(), name='login'),
    path('logout/', UserLogoutView.as_view(), name='logout'),
    path('active/<uid64>/<token>/', activate, name = 'activate'),
]