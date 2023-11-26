from django.http import HttpResponse

def home(response):
    return HttpResponse("This is home page")

def show_contacts(response):
    return HttpResponse("<html>You are watching contact page</html>")