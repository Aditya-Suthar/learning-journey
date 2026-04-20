d = {}

n = int(input("Enter numbers of students:-"))

for i in range(n):
    name = input("Enter name:")
    marks = int(input("Enter marks:-"))
    d[name] = marks


for i in d:
    print(i,d[i])

total = 0
for i in d:
    total += d[i]

avg = total/n

print("Average=",avg)