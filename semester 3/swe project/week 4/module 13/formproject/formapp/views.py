from django.shortcuts import render
from .forms import contactForm

# Create your views here.
def form(req):
    if req.method == 'POST':
        form = contactForm(req.POST, req.FILES)
        if form.is_valid():
            print(form.cleaned_data)
        return render(req, 'formapp/form.html', {'form': form})
    else:
        form = contactForm()
    return render(req, 'formapp/form.html', {'form': form})