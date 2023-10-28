class Vehicle:
    def __init__(self, name, price):
        self.name = name
        self.price = price
    
    def move(self):
        pass
    
    def __repr__(self) -> str:
        return f'from vehicle'


class Bus(Vehicle):
    def __init__(self, name, price, seat):
        self.seat = seat
        super().__init__(name, price)
    
    def __repr__(self) -> str:
        return f'from bus'
        

class ACBus(Bus):
    def __init__(self, name, price, seat, temperature):
        self.temperature = temperature
        super().__init__(name, price, seat)
    
    def __repr__(self) -> str:
        return super().__repr__()

green_line = ACBus('Green Line', 1000, 50, 18)
print(green_line)