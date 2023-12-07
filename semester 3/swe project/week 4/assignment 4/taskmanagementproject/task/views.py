from django.shortcuts import render, redirect, get_object_or_404
from .forms import TaskForm
from .models import TaskModel

# Create your views here.
def create_task(request):
    form = TaskForm()
    
    if request.method == 'POST':
        form = TaskForm(request.POST)
        if form.is_valid():
            form.save(commit=True)
            return redirect("show_tasks")
        
    return render(request, 'create_task.html', {"form": form})

def show_tasks(request):
    tasks = TaskModel.objects.all()
    return render(request, 'show_tasks.html', {"tasks": tasks})

def delete_task(request, pk):
    task = get_object_or_404(TaskModel, pk=pk)
    task.delete()
    return redirect("show_tasks")

def edit_task(request, pk):
    task = get_object_or_404(TaskModel, pk=pk)
    form = TaskForm(instance=task)
    
    if request.method == 'POST':
        form = TaskForm(request.POST, instance=task)
        if form.is_valid():
            form.save(commit=True)
            return redirect("show_tasks")
        
    return render(request, 'create_task.html', {"form": form})