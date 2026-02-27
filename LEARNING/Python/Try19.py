s = input("Enter string: ")

has_letter = False
has_digit = False

for ch in s:
    if ch.isalpha():
        has_letter = True
    if ch.isdigit():
        has_digit = True

if has_letter and has_digit:
    print("Valid string (contains letter and number)")
else:
    print("Invalid string")