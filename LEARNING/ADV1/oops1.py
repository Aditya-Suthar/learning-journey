class Student:
    def __init__(self, name, rollno, age, marks):
        self.name = name
        self.rollno = rollno
        self.age = age
        self.marks = marks   # list of 4 subject marks

    def percentage(self):
        return sum(self.marks) / 4

    def display(self):
        print("Name:", self.name)
        print("Roll No:", self.rollno)
        print("Age:", self.age)
        print("Marks:", self.marks)
        print("Percentage:", self.percentage())
        print("\n")

students = []

# Input data for 10 students
for i in range(10):
    print("\nEnter details of student", i + 1)

    name = input("Enter name: ")
    rollno = int(input("Enter roll number: "))
    age = int(input("Enter age: "))

    marks = []
    for j in range(4):
        m = int(input("Enter marks of subject {}: ".format(j + 1)))
        marks.append(m)

    s = Student(name, rollno, age, marks)
    students.append(s)


print("\nStudent Details\n")
for s in students:
    s.display()


students.sort(key=lambda x: x.percentage(), reverse=True)


print("Students Sorted by Percentage (High to Low) \n")
for s in students:
    s.display()

    name = input("Enter name:-")
    roll = int(input("Enter Roll No.:-"))
    age =  int(input("Enter age:-"))

    marks = []
    for j in range(4):
        m = int(input("Enter marks of subject {}:".format(j+1)))


