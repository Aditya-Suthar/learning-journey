def main ():

    lst_1 = [];
    lst_2 = [];

    n = int(input("Enter the number of elements in the first list"));

    for i in range (0,n):
            num_1 = int (input());
            lst_1.append(num_1);

    m = int(input("Enter the number of elements in the second list"))

    for i in range (0,m):
            num_2 = int(input());
            lst_2.append(num_2);

    print(fun(lst_1,lst_2,n,m));
            
def fun (lst_1,lst_2,n,m):
    new_list = [];
    i=0;
    j=0;

    while(i<n and j<m):
        if (lst_1[i] <= lst_2[j]):
            new_list.append(lst_1[i]);
            i = i+1;

        else:
            new_list.append(lst_2[j]);
            j = j+1;

    while (i<n):
        new_list.append(lst_1[i]);
        i = i+1;

    while (j<m):
        new_list.append(lst_2[j]);
        j = j+1;

    return new_list;

main()
  

            
