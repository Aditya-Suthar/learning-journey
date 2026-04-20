lst = []

n = int(input("Enter the value of n"))

for i in range (n):
    val = int(input("Enter the number"))
    lst.append(val)

search = int(input("ENTER NUMBER TO BE SERACHED"))

found = False

for i in lst:
    if (search == i):
        found = True

if found:
    print("FOUND")

else:
    print("NOT FOUND")

lst.sort()
print(lst)