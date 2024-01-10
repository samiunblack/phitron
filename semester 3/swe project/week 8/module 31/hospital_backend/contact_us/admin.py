from django.contrib import admin
from .models import ContactUs


class ContactModelAdmin(admin.ModelAdmin):
    list_display = ['name', 'phone', 'problem']

admin.site.register(ContactUs, ContactModelAdmin)