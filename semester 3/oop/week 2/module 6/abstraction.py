from abc import ABC, abstractmethod

class Animal(ABC):
    @abstractmethod
    def eat(self):
        pass
    
    def move(self):
        pass


class Monkey(Animal):
    def __init__(self) -> None:
        self.name = 'Monkey'
        super().__init__()
    
    def eat(self):
        print('Eating banana')