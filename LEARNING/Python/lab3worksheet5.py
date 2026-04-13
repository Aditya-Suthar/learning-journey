s = input("Enter string")
result = []

for ch in s:
    if ch == '-':
        ch = ':'
        result.append(ch)
        continue
    if ch == ':':
        ch = '-'
        result.append(ch)
        continue
    result.append(ch)

print("Output:","".join(result))