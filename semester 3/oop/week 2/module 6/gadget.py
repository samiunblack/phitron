class Laptop:
    def __init__(self, brand, price, color, memory):
        self.brand = brand
        self.price = price
        self.color = color
        self.memory = memory
        
    def run(self):
        return f'Running laptop: {self.brand}'

    def coding(self):
        return f'Learning python and practicing'


class Phone:
    def __init__(self, brand, price, color, dual_sim):
        self.brand = brand
        self.price = price
        self.color = color
        self.dual_sim = dual_sim
        
    def run(self):
        return f'phone browsing'
    
    def phone_call(self, number, text):
        return f'Sending SMS to: {number} with {text}'
    
