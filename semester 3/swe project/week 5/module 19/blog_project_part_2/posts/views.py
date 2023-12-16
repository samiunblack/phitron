from django.shortcuts import render, redirect
from . import forms
from . import models
# Create your views here.
from django.contrib.auth.decorators import login_required
from django.views.generic import CreateView, UpdateView, DeleteView
from django.urls import reverse_lazy


@login_required
def add_post(request):
    if request.method == 'POST': # user post request koreche
        post_form = forms.PostForm(request.POST) # user er post request data ekhane capture korlam
        if post_form.is_valid(): # post kora data gula amra valid kina check kortechi
            # post_form.cleaned_data['author'] = request.user
            post_form.instance.author = request.user
            post_form.save() # jodi data valid hoy taile database e save korbo
            return redirect('add_post') # sob thik thakle take add author ei url e pathiye dibo
    
    else: # user normally website e gele blank form pabe
        post_form = forms.PostForm()
    return render(request, 'add_post.html', {'form' : post_form})


class AddPostCreateView(CreateView):
    model = models.Post
    form_class = forms.PostForm
    template_name = 'add_post.html'
    success_url = reverse_lazy("add_post")
    
    def form_valid(self, form):
        form.instance.author = self.request.user
        return super().form_valid(form)



@login_required
def edit_post(request, id):
    post = models.Post.objects.get(pk=id) 
    post_form = forms.PostForm(instance=post)
    # print(post.title)
    if request.method == 'POST': # user post request koreche
        post_form = forms.PostForm(request.POST, instance=post) # user er post request data ekhane capture korlam
        if post_form.is_valid(): # post kora data gula amra valid kina check kortechi
            post_form.instance.author = request.user
            post_form.save() # jodi data valid hoy taile database e save korbo
            return redirect('homepage') # sob thik thakle take add author ei url e pathiye dibo
    
    return render(request, 'add_post.html', {'form' : post_form})


class PostUpdateView(UpdateView):
    model = models.Post
    form_class = forms.PostForm
    template_name = 'add_post.html'
    pk_url_kwarg = 'id'
    success_url = reverse_lazy('homepage')


@login_required
def delete_post(request, id):
    post = models.Post.objects.get(pk=id) 
    post.delete()
    return redirect('homepage')


class PostDeleteView(DeleteView):
    model = models.Post
    template_name = 'delete_post.html'
    pk_url_kwarg = 'id'
    success_url = reverse_lazy('homepage')