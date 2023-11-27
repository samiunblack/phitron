from django.shortcuts import render
import datetime

# Create your views here.
def context(request):
    data = {'dummy_list': ['python', 'is', 'fun'], 'birthday': datetime.datetime.now(), 'value': ''}
    return render(request, 'context/index.html', data)