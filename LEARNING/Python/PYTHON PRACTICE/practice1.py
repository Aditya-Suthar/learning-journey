def main():
    n = int(input("Enter the number n"))
    print(fun(n))

def fun(n):

    if (n == 1):
        return 1

    if (n == 0):
        return 0
    
    return n * fun(n-1)

main()