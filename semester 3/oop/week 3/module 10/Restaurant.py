class Resturant:
    def __init__(self, name) -> None:
        self.name = name
        self.chef = None
        self.server = None
        self.manager = None
        self.menu = []
        self.revenue = 0
        self.expense = 0
        self.profit = 0
    
    
    def add_employees(self, employee_type, employee):
        if employee_type == 'chef':
            self.chef = employee
        elif employee_type == 'sever':
            self.server = employee
        elif employee_type == 'manager':
            self.manager = employee
        
    def recieve_payment(self, order, amount, customer):
        if amount >= order.bill:
            self.revenue += order.bill
            customer.due_amount = 0
            return amount - order.bill
    
    def pay_expense(self, amount, description):
        if(amount <= self.revenue):
            self.revenue -= amount
            self.expense += amount