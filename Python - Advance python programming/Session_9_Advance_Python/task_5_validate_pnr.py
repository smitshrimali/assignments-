import re


# Regular expression for a 10-digit PNR:
# ^\d{10}$


def is_valid_pnr(pnr):
    pattern = r"^\d{10}$"

    if re.match(pattern, pnr):
        return True
    else:
        return False


pnr = input("Enter your 10-digit PNR: ")

if is_valid_pnr(pnr):
    print("Valid PNR")
else:
    print("Invalid PNR")