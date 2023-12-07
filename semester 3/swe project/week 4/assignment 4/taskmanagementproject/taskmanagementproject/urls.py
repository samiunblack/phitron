"""
URL configuration for taskmanagementproject project.

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
from task.views import create_task, show_tasks, delete_task, edit_task
from category.views import create_category
from .views import home

urlpatterns = [
    path('admin/', admin.site.urls),
    path('', home, name="home"),
    path('create_task/', create_task, name="create_task"),
    path('create_category/', create_category, name="create_category"),
    path('show_tasks/', show_tasks, name="show_tasks"),
    path('delete_tasks/<int:pk>/', delete_task, name="delete_task"),
    path('edit_tasks/<int:pk>/', edit_task, name="edit_task"),
]
