class User:
    def __init__(self, name, age, money) -> None:
        self.name = name
        self._age = age
        self.__money = money
    
    @property
    def age(self):
        return self._age
    
    @property
    def salary(self):
        return self.__money

    @salary.setter
    def salary(self, value):
        if value < 0:
            return 'salary can not be negative'
        self.__money += value


samsu = User('Kopa', 21, 12000)
print(samsu.age)
print(samsu.salary)
samsu.salary = 450
print(samsu.salary)