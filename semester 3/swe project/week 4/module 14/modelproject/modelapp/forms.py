from django import forms
from .models import Student

class StudentForm(forms.ModelForm):
    class Meta:
        model = Student
        fields = '__all__'
        #fields = ['name', 'roll']
        #exclude = ['address']
        labels = {
            'name': 'Student Name'
        }
        widgets = {
            'name': forms.TextInput(attrs={'class': 'btn-primary'})
        }
        help_texts = {
            'name': 'write your full name'
        }
        
        error_messages = {
            'name': {'required': 'Your name is required'}
        }