import copy 

lst1 = [[1,3],[2,4],4,5]
lst2 = copy.deepcopy(lst1)

lst2[1][0] = 5
lst2.append(4)

print(lst1)
print(lst2)