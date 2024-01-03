from django.shortcuts import render, get_object_or_404, redirect
from django.views.generic import DetailView, ListView
from .models import Book
from transaction.models import Transaction
from transaction.constants import BORROW, RETURN
from review.forms import ReviewForm
from django.contrib.auth.mixins import LoginRequiredMixin
from django.contrib.auth.decorators import login_required

# Create your views here.
class BookDetailView(DetailView):
    model = Book
    template_name = 'book_detail.html'
    pk_url_kwarg = 'pk'
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        book = self.get_object()
        reviews = book.reviews.all()
        
        context["comments"] = reviews
        context["reviews"] = reviews
        
        return context
    
class BorrowedBooksView(LoginRequiredMixin, ListView):
    model = Book
    template_name = 'borrowed_books.html'
    
    
    def get_queryset(self):
        queryset = super().get_queryset().filter(
            books=self.request.user.account
        )
        
        return queryset
    
    def get_context_data(self,*args, **kwargs):
        context = super().get_context_data(*args,**kwargs)
        context['books'] = self.get_queryset()
        
        return context
    

class BookReturnView(LoginRequiredMixin, DetailView):
    model = Book
    template_name = 'book_return.html'
    pk_url_kwarg = 'pk'
    
    def get_context_data(self, **kwargs):
        context = super().get_context_data(**kwargs)
        book = self.get_object()
        reviews = book.reviews.all()
        review_form = ReviewForm()
        
        context["comments"] = reviews
        context["review_form"] = review_form
        context["reviews"] = reviews
        
        return context


@login_required
def BorrowBook(request, pk):
    book = get_object_or_404(Book, pk=pk)
    request.user.account.borrowed_books.add(book)
    
    Transaction.objects.create(user=request.user.account, amount=book.price, balance_after_transaction=request.user.account.balance - book.price, transaction_type=BORROW)
    
    account = request.user.account
    account.balance -= book.price 
    account.save(
        update_fields=[
            'balance'
        ]
    )
    
    return redirect("borrowed_books")
    

@login_required
def ReturnBook(request, pk):
    book = get_object_or_404(Book, pk=pk)
    request.user.account.borrowed_books.remove(book)
    
    Transaction.objects.create(user=request.user.account, amount=book.price, balance_after_transaction=request.user.account.balance + book.price, transaction_type=RETURN)
    
    account = request.user.account
    account.balance += book.price 
    account.save(
        update_fields=[
            'balance'
        ]
    )
    
    return redirect("borrowed_books")