class Student:
    def __init__(self, name, rollno, marks):
        self.name = name
        self.rollno = rollno
        self.marks = marks
    
    def percentage(self):
        total = sum(self.marks)
        return total/len(self.marks)
    
    def display(self):
        print("NAME:", self.name)
        print("ROLL NO:", self.rollno)
        print("MARKS:", self.marks)
        print("PERCENTAGE:",self.percentage())

def main ():
    s = Student("ADITYA",1,[80,85,90,95])
    s.display()

main()