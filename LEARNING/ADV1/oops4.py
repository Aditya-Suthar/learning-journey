class Person:
    def __init__(self,name):
        self.name = name

    def display(self):
        print("Name:", self.name)


class Student(Person):
    def __init__(self, name, rollno):
        super().__init__(name)   # calling parent constructor
        self.rollno = rollno

    def display(self):
        super().display()   # calling parent method
        print("Roll No:", self.rollno)


s = Student("Aditya", 101)
s.display()