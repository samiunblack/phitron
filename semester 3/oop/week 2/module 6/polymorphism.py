class Animal:
    def __init__(self, name) -> None:
        self.name = name
    
    def make_sound(self):
        print('Animal making sound')

class Cat(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
    
    def make_sound(self):
        print('meow meow')

class Dog(Animal):
    def __init__(self, name) -> None:
        super().__init__(name)
    
    def make_sound(self):
        print('woof woof')

don = Cat('Real Don')
don.make_sound()

shepard = Dog('Local Shepard')
shepard.make_sound()