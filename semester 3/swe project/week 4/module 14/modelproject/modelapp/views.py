from django.shortcuts import render, redirect
from .models import Student
from .forms import StudentForm

# Create your views here.
def home(request):
    if request.method == 'POST':   
        form = StudentForm(request.POST)
        if form.is_valid():
            form.save(commit=True)
    else:
        form = StudentForm()
    students = Student.objects.all()
    return render(request, 'home.html', {'students': students, 'form': form})

def delete_student(request, roll):
    Student.objects.get(pk=roll).delete()
    return redirect('home')
    
    
    