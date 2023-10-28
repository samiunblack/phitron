class Bank:
    def __init__(self, name, initial_amount):
        self.name = name
        self.balance = initial_amount
        self.bankrupt = False
        self.loan_amount = 0
        self.users = []
        self.admins = []
        self.loan = True
    
    def recieve_loan(self, amount, user):
        if(self.loan == True):
            if amount > self.balance:
                print("Sorry, Loan amount exceeded.")
            elif amount <= 0:
                print("Please provide positive amount.")
            else:
                user.loan += 1
                user.loan_amount += amount
                user.balance += amount
                self.balance -= amount
                self.loan_amount += amount
                print(f"Successfully Loan Recieved. Updated Balance: {user.balance}")
                user.transaction_history.append(f'LOAN: {amount} CURRENT: {user.balance}')
        else:
            print("Cannot give Loan")