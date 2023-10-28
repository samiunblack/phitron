class Food:
    def __init__(self, name, price) -> None:
        self.name = name
        self.price = price
        self.cooking_time = 15


class Burger(Food):
    def __init__(self, name, price, meat, ingredients) -> None:
        super().__init__(name, price)
        self.meat = meat
        self.ingredients = ingredients
        

class Pizza(Food):
    def __init__(self, name, price, size, ingredients) -> None:
        super().__init__(name, price)
        self.size = size
        self.ingredients = ingredients
        

class Menu:
    def __init__(self) -> None:
        self.pizzas = []
        self.burgers = []
        self.drinks = []
    
    def add_menu_item(self, item_type, item):
        if item_type == 'pizza':
            self.pizzas.append(item)
        elif item_type == 'burger':
            self.burgers.append(item)
        else:
            self.drinks.append(item)
    
    def show_menu(self):
        for pizza in self.pizzas:
            print(f'name: {pizza.name} price: {pizza.price}')
        for burger in self.burgers:
            print(f'name: {burger.name} price: {burger.price}')
        