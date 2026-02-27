
email = input("Enter Gmail ID: ")

if email.endswith("@gmail.com") and "@" in email:
    print("Valid Gmail ID")
else:
    print("Invalid Gmail ID")