import re

email = input("Enter your Gmail address: ")

pattern = r"^[a-z][a-zA-Z0-9._%+-]*@gmail\.com$"

if re.match(pattern, email):
    print("Valid Gmail")
else:
    print("Invalid Gmail")