lst = []

n = int(input("Enter the value of n"))

for i in range (n):
    val = int(input("Enter the number"))
    lst.append(val)

search = int(input("ENTER NUMBER TO BE SERACHED"))

for i in range(n):
    if (search == i):
        print("FOUND")
    else:
        print("NOT FOUND")

sorted.lst()
print(lst)