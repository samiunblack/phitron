"""
URL configuration for musiciansdirectory project.

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/5.0/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""
from django.contrib import admin
from django.urls import path
from musician import views
from album.views import create_album

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', views.show_musician, name="home"),
    path('create_musician/', views.create_musician, name="create_musician"),
    path('create_album/', create_album, name="create_album"),
    path('edit_musician/<int:pk>/', views.edit_musician, name="edit_musician"),
    path("delete_musician/<int:pk>/", views.delete_musician, name="delete_musician")
]
