class User:
    def __init__(self, email, password):
        self.email = email
        self.password = password
        self.wallet = 0;
    

class Customer(User):
    def __init__(self, email, password):
        super().__init__(email, password)
        
    def add_money(self, amount):
        if(amount > 0):
            self.wallet += amount
    
    def purchase(self, product):
        if(product.price <= self.wallet):
            self.wallet -= product.price
            product.place_order()
    

class Seller(User):
    def __init__(self, email, password):
        super().__init__(email, password)
        self.products = []
    
    def add_product(self, product):
        self.products.append(product)
        Shop().update_products(product)


class Product:
    def __init__(self, name, price, stock, seller):
        self.name = name
        self.price = price
        self.stock = stock
        self.seller = seller
    
    def place_order(self):
        self.seller.wallet += self.price
        self.stock -= 1


class Shop:
    def __init__(self):
        self.sellers = []
        self.products = []
        
    def add_seller(self, seller):
        self.sellers.append(seller)
    
    def update_product(self, product):
        self.products.append(product)
    
    def view_products(self):
        print("----------")
        for product in self.products:
            if product.stock > 0:
                print(f'PRODUCT NAME: {product.name} PRICE: {product.price} STOCK: {product.stock}')
        print("----------")