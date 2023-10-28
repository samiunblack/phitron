from Users import Customer, Admin
from Bank import Bank

def main():
    bank = Bank('american bank', 1000000000000000)
    
    wayne = Customer("Bruce Wayne", "brucewayne@gmail.com", "current")
    parker = Customer("Peter Parker", "peterparker@gmail.com", "savings")
    rogers = Customer("Steve Rogers", "steverogers@gmail.com", "current")
    
    stark = Admin("Tony Stark", "iamironman@gmail.com")
    
    wayne.create_account(bank)
    parker.create_account(bank)
    rogers.create_account(bank)
    
    stark.create_account(bank)
    
    while True:
        print("1. Deposit Money")
        print("2. Withdraw Money")
        print("3. View Balance")
        print("4. View Transaction History")
        print("5. Take Loan")
        print("6. Transfer Money")
        print("7. Delete User Account")
        print("8. View All Users")
        print("9. View total bank balance")
        print("10. View total bank loan")
        print("11. Switch Loan Feature")
        print("12. Exit")
        
        n = int(input("Enter an option: "))
        
        if n == 1:
            dep = int(input("Enter deposit amount: "))
            wayne.deposit(dep)
        elif n == 2:
            draw = int(input("Enter withdraw amount: "))
            wayne.withdraw(draw)
        elif n == 3:
            wayne.view_balance()
        elif n == 4:
            wayne.view_transaction_history()
        elif n == 5:
            amount = int(input("Enter loan amount: "))
            wayne.take_loan(amount)
        elif n == 6:
            amount = int(input("Enter transfer amount: "))
            wayne.transfer(parker, amount)
        elif n == 7:
            stark.delete_user_account(parker.account_number)
        elif n == 8:
            stark.view_users()
        elif n == 9:
            stark.view_total_balance()
        elif n == 10:
            stark.view_total_loan()
        elif n == 11:
            decision = input("Enter decision (y / n): ")
            if(decision == 'y'):
                stark.switch_loan_feature(True)
            else:
                stark.switch_loan_feature(False)
        
        else:
            break

if __name__ == '__main__':
    main()