class Student:
    def __init__(self, name, rollno, age):
        self.name = name
        self.age = age
        self.rollno = rollno
    
    def display(self):
        print("Name:",self.name)
        print("Age",self.age)
        print("Roll No:", self.rollno)

def main ():
    s = Student("ADITYA",1,20)
    s.display()

main()
    