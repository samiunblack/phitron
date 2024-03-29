# Generated by Django 5.0.1 on 2024-01-17 05:06

import django.db.models.deletion
from django.conf import settings
from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
        ('food', '0001_initial'),
        migrations.swappable_dependency(settings.AUTH_USER_MODEL),
    ]

    operations = [
        migrations.CreateModel(
            name='Order',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('order_no', models.IntegerField(blank=True, null=True)),
                ('placed_on', models.DateField(auto_now_add=True)),
                ('total', models.DecimalField(decimal_places=2, max_digits=12)),
                ('items', models.ManyToManyField(blank=True, related_name='orders', to='food.food')),
                ('user', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, to=settings.AUTH_USER_MODEL)),
            ],
        ),
    ]
