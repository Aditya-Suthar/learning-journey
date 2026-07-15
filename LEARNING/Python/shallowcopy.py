import copy

lst1 = [[1,2],[3,4],5,6]

lst2 = copy.copy(lst1)

lst2[1][0] = 9
lst2.append(10)

print(lst1)
print(lst2)

# lst1 = [[1,2],[9,4],5,6]
# lst2 = [[1,2],[9,4],5,6,10]
# expected result