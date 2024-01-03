from django.shortcuts import get_object_or_404, redirect
from .forms import ReviewForm
from book.models import Book
from django.contrib.auth.decorators import login_required

# Create your views here.
@login_required
def review(request, pk):
    form = ReviewForm()
    book = get_object_or_404(Book, pk=pk)
    if request.method == 'POST':
        form = ReviewForm(request.POST)
        if form.is_valid():
            review = form.save(commit=False)
            review.user = request.user.account
            review.book = book
            form.save()
        return redirect("home")