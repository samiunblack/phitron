def timer(func):
    def inner_fun(*args):
        print('inside timer inner fun')
        func(*args)
    
    return inner_fun
    

@timer
def get_factorial(n):
    print('factorial', n)
    

get_factorial(5)
