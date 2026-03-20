def main():
    n = int(input("Enter the number of elements:"));
            
    lst = [];
    for i in range (0,n):
            num = int(input("Enter the element here:"));
            lst.append(num);

    result = fun(lst);
    print(result);

def fun(lst):
    new_list = [];
    
    for i in lst:
        if ( i%2 == 0):
            new_list.append(i);

    return new_list;

main()
