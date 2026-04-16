def set_union(s1,s2):
    return s1|s2

def main():

    s1 = set(map(int,input("Enter s1:").split()))
    s2 = set(map(int,input("Enter s2:").split()))

    result = set_union(s1,s2)

    print("Set 1:", s1)
    print("Set 2:", s2)
    print("Union:", result)

main()