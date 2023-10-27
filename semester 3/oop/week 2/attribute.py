class Shop:
    shop_name = 'amazon' # class attribute
    
    def __init__(self, buyer) -> None:
        self.buyer = buyer
        self.cart = [] # instance attribute
        
    def add_to_cart(self, item):
        self.cart.append(item)
        

parker = Shop('peter parker')
parker.add_to_cart('DSLR')
parker.add_to_cart('Zoom Lens')
parker.add_to_cart('Rubic\'s Cube')

print(parker.cart)