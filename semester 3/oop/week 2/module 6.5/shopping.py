class Shop:
    def __init__(self) -> None:
        self.products = []
    
    def add_product(self, product):
        self.products.append(product)
    
    def buy_product(self, product_name):
        product = next((p for p in self.products if p.name == product_name), None)
        if product:
            return f'Congratulations! you bought {product_name}'
        else:
            return f'Sorry! {product_name} is not available'

class Product:
    def __init__(self, name, price) -> None:
        self.name = name
        self.price = price


startech = Shop()
p1 = Product('Phone', 70000)
p2 = Product('Laptop', 120000)
p3 = Product('Monitor', 27000)
p4 = Product('Casing', 12000)

startech.add_product(p1)
startech.add_product(p2)
startech.add_product(p3)
startech.add_product(p4)

print(startech.buy_product('Monitor'))
print(startech.buy_product('Processor'))