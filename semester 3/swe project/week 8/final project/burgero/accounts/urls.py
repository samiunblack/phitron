from django.urls import path
from .views import UserRegistrationView, UserLoginView, UserLogoutView, activate, UserUpdateView
 
urlpatterns = [
    path('register/', UserRegistrationView.as_view(), name='register'),
    path('edit-profile/', UserUpdateView.as_view(), name='edit_profile'),
    path('login/', UserLoginView.as_view(), name='login'),
    path('logout/', UserLogoutView.as_view(), name='logout'),
    path('active/<uid64>/<token>/', activate, name = 'activate'),
]