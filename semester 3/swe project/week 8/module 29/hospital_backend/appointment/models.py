from django.db import models
from patient.models import Patient
from doctor.models import Doctor, AvailableTime

# Create your models here.
APPOINTMENT_STATUS = (
    ('Completed', 'Compelted'),
    ('Pending', 'Pending'),
    ('Running', 'Running'),
)

APPOINTMENT_TYPES = (
    ('Offline', 'Offline'),
    ('Online', 'Online'),
)

class Appointment(models.Model):
    patient = models.ForeignKey(Patient, on_delete=models.CASCADE)
    doctor = models.ForeignKey(Doctor, on_delete=models.CASCADE)
    symptoms = models.TextField()
    appointment_types = models.CharField(choices=APPOINTMENT_TYPES, max_length=10)
    appointment_status = models.CharField(choices=APPOINTMENT_STATUS, max_length=100, default="Pending")
    time = models.OneToOneField(AvailableTime, on_delete=models.CASCADE)
    cancel = models.BooleanField(default=False)

    def __str__(self):
        return f"Doctor: {self.doctor.user.first_name}; Patient: {self.patient.user.first_name}"