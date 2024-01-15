# Generated by Django 5.0.1 on 2024-01-15 09:54

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('food', '0002_alter_food_is_discount'),
    ]

    operations = [
        migrations.AlterField(
            model_name='food',
            name='discount_price',
            field=models.DecimalField(blank=True, decimal_places=2, max_digits=12, null=True),
        ),
    ]
