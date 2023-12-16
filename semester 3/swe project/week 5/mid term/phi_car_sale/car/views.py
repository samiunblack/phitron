from django.shortcuts import get_object_or_404, redirect
from django.views.generic.detail import DetailView
from .models import Car
from comment.forms import AddCommentForm


class CarDetail(DetailView):
    model = Car
    pk_url_kwarg = 'pk'
    template_name = "car_detail.html"
    
    
    def post(self, request, *args, **kwargs):
        comment_form = AddCommentForm(data=self.request.POST)
        car = self.get_object()
        if comment_form.is_valid():
            new_comment = comment_form.save(commit=False)
            new_comment.car = car
            new_comment.save()
        return self.get(request, *args, **kwargs)
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        car = self.get_object()
        comments = car.comments.all()
        comment_form = AddCommentForm()
        
        context["comments"] = comments
        context["comment_form"] = comment_form
        
        return context
                
        

def update_quantity(request, pk):
    car = get_object_or_404(Car, pk=pk)
    car.quantity -= 1
    car.buyers.add(request.user)
    car.save()
    return redirect("profile")