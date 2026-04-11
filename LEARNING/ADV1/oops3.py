class Parent:
    def show_parent(self):
        print("This is Parent class")

class Child(Parent):   
    def show_child(self):
        print("This is Child class")


c = Child()
c.show_parent()
c.show_child()


class Father:
    def show_father(self):
        print("This is Father class")

class Mother:
    def show_mother(self):
        print("This is Mother class")

class Child2(Father, Mother):  
    def show_child(self):
        print("This is Child class (Multiple Inheritance)")


c2 = Child2()
c2.show_father()
c2.show_mother()
c2.show_child()