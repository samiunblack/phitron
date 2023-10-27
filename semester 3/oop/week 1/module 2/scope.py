balance = 3000 # global variable

def buy_thing(item, price):
    # balance = 250 #local variable
    
    global balance
    balance = balance - price
    
    print(f'balance after buying {item}', balance)
    
buy_thing("sunglass", 1000)