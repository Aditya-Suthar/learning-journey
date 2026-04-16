def max_tuple(tp):
    maximum = tp[0]

    for i in tp:
        if (i>maximum):
            maximum = i
    
    return maximum

def main ():
    tp = tuple(map(int,input("Enter elements:").split()))

    result = max_tuple(tp)

    print("Tuple:",tp)
    print("Maximum=",result)

main()