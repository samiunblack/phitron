class Shopping:
    cart = [] #static attribute
    
    def __init__(self, name, location):
        self.name = name # instance attribute
    
    @classmethod
    def purchase(self, item):
        print('purchasing item:', item)
    
    @staticmethod
    def multiply(a, b):
        print(a * b)
    

Shopping.purchase('phone')
Shopping.multiply(10, 20)