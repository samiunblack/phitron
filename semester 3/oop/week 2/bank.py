class Bank:
    def __init__(self, balance) -> None:
        self.balance = balance
        self.min_withdraw = 100
        self.max_withdraw = 1000000
        
    
    def get_balance(self):
        return self.balance

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
    
    def withdraw(self, amount):
        if amount < self.min_withdraw:
            print(f'fokira. you cannot withdraw below ${self.min_withdraw}')
    
        elif amount > self.max_withdraw:
            print(f'bank fokir hoye jabe. you cannot withdraw more than ${self.max_withdraw}')
        else:
            self.balance -= amount
            print(f'Here is your ${amount}')
            print(f'Your balance after withdraw ${self.get_balance()}')
        
        
brac = Bank(15000000)
brac.withdraw(50)
brac.withdraw(5000000)
brac.withdraw(1000)