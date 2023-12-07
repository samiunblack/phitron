from django.db import models
from category.models import TaskCategory

# Create your models here.
class TaskModel(models.Model):
    task_title = models.CharField(max_length=255)
    task_description = models.TextField(blank=True)
    is_completed = models.BooleanField(default=False)
    task_assign_date = models.DateField(auto_now_add=True)
    categories = models.ManyToManyField(TaskCategory, related_name="categories")
    
    def __str__(self):
        return self.task_title