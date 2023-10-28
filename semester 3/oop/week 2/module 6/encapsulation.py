class Bank:
    def __init__(self, holder_name, initial_deposit) -> None:
        self.holder_name = holder_name #public
        self._branch = 'banani' #protected
        self.__balance = initial_deposit #private
    
    def deposit(self, amount):
        if amount > 0:
            self.__balance += amount
        
        print(f'Your current balance: {self.balance}')
    
    def get_balance(self):
        return self.__balance


wayne = Bank('Bruce Wayne', 100000000)
print(wayne._Bank__balance)

