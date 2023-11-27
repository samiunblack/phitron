from django.shortcuts import render

# Create your views here.
def home(request):
    return render(request, 'navigations/index.html')

def navigations(request):
    return render(request, 'navigations/navigations.html')

def about(request):
    return render(request, 'navigations/about.html')

def contact(request):
    return render(request, 'navigations/contact.html')