from django.contrib import admin
from . import models


admin.site.register(models.Wallet)
admin.site.register(models.Transaction)
