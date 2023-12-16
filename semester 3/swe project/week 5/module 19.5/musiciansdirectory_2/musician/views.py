from django.shortcuts import render, redirect, get_object_or_404
from .models import Musician
from .forms import MusicianForm
from album.models import Album
from django.contrib.auth.decorators import login_required

# Create your views here.
@login_required
def create_musician(request):
    form = MusicianForm()
    
    if request.method == "POST":
        form = MusicianForm(request.POST)
        
        if form.is_valid():
            form.save(commit=True)
            return redirect("home")
        
    return render(request, "create_musician.html", {"form": form})

@login_required
def edit_musician(request, pk):
    musician = get_object_or_404(Musician, pk=pk)
    form = MusicianForm(instance=musician)
    
    if request.method == "POST":
        form = MusicianForm(request.POST, instance=musician)
        
        if form.is_valid():
            form.save(commit=True)
            return redirect("home")
        
    return render(request, "create_musician.html", {"form": form})

@login_required
def delete_musician(request, pk):
    musician = get_object_or_404(Musician, pk=pk)
    musician.delete()
    return redirect("home")


def show_musician(request):
    musicians = Musician.objects.all()
    albums = Album.objects.all()
    return render(request, "home.html", {"musicians": musicians, "albums": albums})