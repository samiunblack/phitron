def double_decker():
    print('starting the double decker')
    
    def inner_fun():
        print('inside the inner')
        return 3000
    
    inner_fun()
    return inner_fun

print(double_decker()())


def do_something(work):
    print('work started')
    work()
    print('work ended')
    
do_something(lambda : print('sleeping'))