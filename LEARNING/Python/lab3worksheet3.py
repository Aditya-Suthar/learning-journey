s = input("Enter a sentence: ")

words = s.split() 
result = []

for w in words:
    result.append(w[::-1])

print("Output:"," ".join(result))
