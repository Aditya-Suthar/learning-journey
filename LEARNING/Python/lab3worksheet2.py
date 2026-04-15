s1 = input("Enter the string here:")
s2 = input("Enter the substring here:")

indices = []
start = 0

while True:
    pos = s1.find(s2,start)
    
    if pos == -1:
        break

    indices.append(pos)
    start = pos+1

print(indices)