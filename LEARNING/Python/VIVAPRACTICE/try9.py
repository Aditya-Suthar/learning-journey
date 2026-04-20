def find_max(d):
    max_marks = 0
    name = ""

    for i in d:
        if d[i]> max_marks:
            max_marks = d[i]
            name = i
    return name

def main ():
    d = {}

    n = int(input("Enter number of students:"))

    for i in range(n):
        name = input("Enter name:")
        marks = int(input("Enter marks:"))
        d[name] = marks
    
    result = find_max(d)

    print("Dictionary:",d)
    print("Topper:",result)