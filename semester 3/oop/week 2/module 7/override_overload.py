class Person:
    def __init__(self, name, age, height, weight) -> None:
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight

    def eat(self):
        print('Rice, Veggie, Meat, Biriyani')


class Cricketer(Person):
    def __init__(self, name, age, height, weight, team) -> None:
        self.team = team
        super().__init__(name, age, height, weight)
        
    def eat(self):
        print('Veggie')
    
    def __add__(self, other):
        return self.age + other.age
        

sakib = Cricketer('sakib', 38, 68, 91, 'BD')
sakib.eat()

mushi = Cricketer('mushi', 36, 60, 78, 'BD')

print(sakib + mushi)