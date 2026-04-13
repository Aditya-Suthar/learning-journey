s1 = input("Enter the string:")
s2 = input("Enter the substring:")

indices = []
start = 0
count = 0

while True:
    pos = s1.find(s2,start)

    if (pos == -1):
        break

    count = count + 1
    start = pos + 1

print (count)