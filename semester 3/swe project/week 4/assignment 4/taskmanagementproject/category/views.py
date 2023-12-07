from django.shortcuts import render, redirect
from .forms import CategoryForm

# Create your views here.
def create_category(request):
    form = CategoryForm()
    
    if request.method == 'POST':
        form = CategoryForm(request.POST)
        
        if form.is_valid():
            form.save(commit=True)
            return redirect("show_tasks")
    
    return render(request, 'create_category.html', {"form": form})