class A:
    def show(self):
        print("Class A")

class B(A):
    def show(self):
        print("Class B")

class C(A):
    def show(self):
        print("Class C")

class D(B, C): 
    pass

d = D()
d.show() 

print("\nMRO of class D:")
for cls in D.mro():
    print(cls)