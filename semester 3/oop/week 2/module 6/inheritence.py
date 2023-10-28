
class Device:
    def __init__(self, brand, price, color):
        self.brand = brand
        self.price = price
        self.color = color
    
    def run(self):
        return f'Running'


class Laptop:
    def __init__(self, memory):
        self.memory = memory

    def coding(self):
        return f'Learning python and practicing'


class Phone(Device):
    def __init__(self, brand, price, color, dual_sim):
        self.dual_sim = dual_sim
        super().__init__(brand, price,color)
    
    def phone_call(self, number, text):
        return f'Sending SMS to: {number} with {text}'
    
class Camera:
    def __init__(self, pixel):
        self.pixel = pixel
    
    def change_lens():
        pass
    

my_phone = Phone('Apple', 120000, 'Black', True)
print(my_phone.brand)