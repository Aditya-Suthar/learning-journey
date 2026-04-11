class Company:
    def __init__(self, companyName):
        self.companyName = companyName
    def address(self):
        print("Bangalore")
    def getName(self):
        return self.companyName

class Employee(Company):
    def __init__(self, name, id, companyName):
        self.name = name
        self.id = id
        super().__init__(companyName)
    def work(self):
        print("Software Engineer")
    def getName(self):
        print(super().getName())
        return self.name
    
emp1 = Employee("ADITYA",1234,"NAD")
emp1.work()
emp1.address()
print(emp1.name,emp1.id,emp1.companyName)

print(Employee.__mro__)
print(Company.mro())