class Shop:
    def __init__(self, name) -> None:
        self.name = name
        self.cart = []
        
    def add_to_cart(self, item, price, quantity):
        product = {'item': item, 'price': price, 'quantity': quantity}
        self.cart.append(product)

    def checkout(self, amount):
        total = 0
        
        for item in self.cart:
            total += item['price'] * item['quantity']
        
        print('Total price', total)
        
        if amount < total:
            print(f'Please provide {total - amount} more')
        else:
            print(f'Here is your items and change {amount - total}')


swapan = Shop('Alan Swapon')
swapan.add_to_cart('alu', 50, 6)
swapan.add_to_cart('dim', 12, 24)
swapan.add_to_cart('rice', 50, 5)
swapan.checkout(1000)
