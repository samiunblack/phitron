from django import forms
from .models import Comment

class AddCommentForm(forms.ModelForm):
    class Meta:
        model = Comment
        exclude = ["car", "created_on"]