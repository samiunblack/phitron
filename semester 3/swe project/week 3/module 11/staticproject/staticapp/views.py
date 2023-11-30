from django.shortcuts import render

def home(req):
    return render(req, 'staticapp/index.html')


def about(req, id):
    return render(req, 'staticapp/about.html', {'id': id})