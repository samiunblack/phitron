from django.urls import path
from . import views
 
urlpatterns = [
    path('books/<int:pk>', views.BookDetailView.as_view(), name='book_detail'),
    path('borrowed-book/<int:pk>', views.BookReturnView.as_view(), name='borrowed_book'),
    path('borrow-book/<int:pk>', views.BorrowBook, name="borrow_book"),
    path("borrowed-books-list/", views.BorrowedBooksView.as_view(), name="borrowed_books"),
    path("return-book/<int:pk>", views.ReturnBook, name="return_book")
]