from abc import ABC, abstractmethod

class User(ABC):
    def __init__(self, name) -> None:
        self.name = name


class Customer(User):
    def __init__(self, name, money) -> None:
        super().__init__(name)
        self.wallet = money
        self.__order = None
    
    @property
    def order(self):
        return self.__order
    
    @order.setter
    def order(self, order):
        self.__order = order
    
    def place_order(self, order):
        self.order = order
        print(f'{self.name} placed an order {order.items}')
        
    def pay_for_order(self, amount):
        pass

    def give_tips(self, tips_amount):
        pass

    def write_review(self, stars):
        pass


class Employee(User):
    def __init__(self, name, salary, starting_date, department):
        super().__init__(name)
        
        self.salary = salary
        self.starting_date = starting_date
        self.department = department
        


class Chef(Employee):
    def __init__(self, name, salary, starting_date, department, cooking_item):
        self.cooking_item = cooking_item
        super().__init__(name, salary, starting_date, department)
        

class Server(Employee):
    def __init__(self, name, salary, starting_date, department, take_order):
        self.tips_earning = 0
        self.take_order = take_order
        super().__init__(name, salary, starting_date, department)
        

class Manager(Employee):
    def __init__(self, name, salary, starting_date, department):
        super().__init__(name, salary, starting_date, department)