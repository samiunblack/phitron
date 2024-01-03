# Generated by Django 5.0 on 2024-01-02 06:33

import django.db.models.deletion
from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
        ('accounts', '0002_remove_userbankaccount_user_useraccount_and_more'),
    ]

    operations = [
        migrations.CreateModel(
            name='Transaction',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('amount', models.DecimalField(decimal_places=2, max_digits=12)),
                ('balance_after_transaction', models.DecimalField(decimal_places=2, max_digits=12)),
                ('transaction_type', models.IntegerField(choices=[(1, 1), (2, 2), (2, 2)])),
                ('user', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, to='accounts.useraccount')),
            ],
        ),
    ]