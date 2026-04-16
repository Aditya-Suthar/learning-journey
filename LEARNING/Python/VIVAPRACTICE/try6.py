def sum_list(lst):
    total = 0
    for i in lst:
        total += i
    return total

def main ():
    lst = []

    n = int(input("Enter number of elements:"))

    for i in range(n):
        val = int(input("Enter number:"))
        lst.append(val)
    
    result = sum_list(lst)

    print("List:",lst)
    print("Sum = ",result)

main()