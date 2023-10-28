from abc import ABC, abstractmethod
from datetime import datetime


class Ride_Sharing:
    def __init__(self, compnay_name) -> None:
        self.company_name = compnay_name
        self.riders = []
        self.drivers = []
        self.rides = []


class User(ABC):
    def __init__(self, name, email, nid, initial_amount):
        self.name = name
        self.email = email
        #TODO: create id dynamically
        self.__id = 0
        self.__nid = nid
        self.wallet = initial_amount
    
    
    @abstractmethod
    def display_profile(self):
        raise NotImplementedError  
    
    def load_cash(self, amount):
        self.wallet += amount  
    

class Rider(User):
    def __init__(self, name, email, nid, current_location,  initial_amount):
        self.current_ride = None
        self.current_location = current_location
        super().__init__(name, email, nid, initial_amount)
    
    def display_profile(self):
        print(f'Rider: with name: {self.name} and email: {self.email}')
        
    
    def update_location(self, location):
        self.current_location = location

    
    def request_ride(self, destination):
        if not self.current_rideride:
            ride_request = Ride_Request(self, destination)
            ride_matcher = Ride_Matching()
            self.current_ride = ride_matcher.find_driver(ride_request)
            

class Driver(User):
    def __init__(self, name, email, nid, location, initial_amount):
        super().__init__(name, email, nid, initial_amount)
        self.current_location = location
        
    def display_profile(self):
         print(f'Driver: with name: {self.name} and email: {self.email}')
         
    def accept_ride(self, ride):
        ride.set_driver(self)


class Ride:
    def __init__(self, start_location, end_location) -> None:
        self.start_location = start_location
        self.end_location = end_location
        self.driver = None
        self.rider = None
        self.start_time = None
        self.end_time = None
        self.estimated_fare = None
    
    def set_driver(self, driver):
        self.driver = driver
    
    def start_ride(self):
        self.start_time = datetime.now()
    
    def end_ride(self, amount):
        self.end_time = datetime.now()
        self.rider.wallet -= self.estimated_fare
        self.driver.wallet += self.estimated_fare
        

class Ride_Request:
    def __init__(self, rider, end_location) -> None:
        self.rider = rider
        self.end_location = end_location
        

class Ride_Matching:
    def __init__(self) -> None:
        self.available_drivers = []
        
    def find_driver(self, ride_request):
        if len(self.available_drivers) > 0:
            driver = self.available_drivers[0]
            ride = Ride(ride_request.rider.current_location, ride_request.end_location)
            driver.accpet_ride(ride)
            return ride
        
        
class Vehicle(ABC):
    speed = {'car': 50, 'bike': 60, 'cng': 15}
    
    def __init__(self, vehicle_type, license_plate, rate) -> None:
        self.vehicle_type = vehicle_type
        self.license_plate = license_plate
        self.rate = rate
        self.status = 'available'
        
    @abstractmethod
    def start_drive(self):
        pass

class Car(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate) -> None:
        super().__init__(vehicle_type, license_plate, rate)
        
    def start_drive(self):
        self.status = 'unavailable'
    
        
class Bike(Vehicle):
    def __init__(self, vehicle_type, license_plate, rate) -> None:
        super().__init__(vehicle_type, license_plate, rate)
        
    def start_drive(self):
        self.status = 'unavailable'