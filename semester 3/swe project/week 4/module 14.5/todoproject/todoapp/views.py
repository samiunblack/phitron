from django.shortcuts import render, redirect
from .forms import TodoForm
from .models import Todo

# Create your views here.
def home(request):
    form = TodoForm()
    if request.method == 'POST':
        form = TodoForm(request.POST)
        if form.is_valid():
            form.save(commit=True)
            return redirect('home')
    
    todos = Todo.objects.all()
    return render(request, 'home.html', {'form': form, 'todos': todos})