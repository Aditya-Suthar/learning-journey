# Encapsulation :- binding data and methods together
#                  and restrecting data

class BankAccount:
    def __init__(self, name, balance):
        self.name = name
        self.__balance = __balance  # private variable
    
acc1 = BankAccount("Abhinav",100)
acc1.name = "Awasthi"
print(acc1.name)
acc1.balance = 1000000
print(acc1.__balance)