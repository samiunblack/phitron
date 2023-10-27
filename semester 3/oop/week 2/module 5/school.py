class Student:
    def __init__(self, name, id, grade) -> None:
        self.name = name
        self.id = id
        self.grade = grade
        
    def __repr__(self) -> str:
        return f'I am {self.name} with id {self.id} and I am from grade {self.grade}'

class Teacher:
    def __init__(self, name, subject, id) -> None:
        self.name = name
        self.subject = subject
        self.id = id
    
    def __repr__(self) -> str:
        return f'Teacher: {self.name}, ID: {self.id}, Subject: {self.subject}'
    

class School:
    def __init__(self, name) -> None:
        self.name = name
        self.teachers = []
        self.students = []
        
    def add_teacher(self, name, subject):
        id = len(self.teachers) + 101
        teacher = Teacher(name, subject, id)
        self.add_teacher(teacher)
    
    
    def enroll(self, name, grade, fee):
        if fee < 6500:
            return 'not enough fee'
        else:
            id = len(self.students) + 242001
            student = Student(name, id, grade)
            self.students.append(student)
            
            return f'{name} is enrolled with id: {id}, extra money {fee - 6500}'
        

phitron = School('phitron')
phitron.enroll('peter', 10, 7600)
phitron.enroll('bruce', 11, 80000)
phitron.enroll('tony', 11, 7000)
phitron.enroll('clerk', 10, 6500)

phitron.add_teacher('May', 'DDA')
phitron.add_teacher('Severus', 'Chemistry')
phitron.add_teacher('Lupin', 'History')