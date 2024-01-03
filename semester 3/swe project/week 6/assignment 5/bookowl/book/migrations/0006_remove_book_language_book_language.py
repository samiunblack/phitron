# Generated by Django 5.0 on 2024-01-02 13:30

import django.db.models.deletion
from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('book', '0005_alter_book_genres'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='book',
            name='language',
        ),
        migrations.AddField(
            model_name='book',
            name='language',
            field=models.ForeignKey(blank=True, null=True, on_delete=django.db.models.deletion.CASCADE, to='book.language'),
        ),
    ]
