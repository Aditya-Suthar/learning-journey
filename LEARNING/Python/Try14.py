s1 = input("Enter main string: ")
s2 = input("Enter substring: ")

index = s1.find(s2)
positions = []

while index != -1:
    positions.append(index)
    index = s1.find(s2, index + 1)

print("Positions:", positions)