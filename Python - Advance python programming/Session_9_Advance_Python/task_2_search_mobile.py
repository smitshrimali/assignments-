import re

text = """
For delivery updates, contact 9876543210.
Customer support is available during business hours.
"""

match = re.search(r"\b\d{10}\b", text)

if match:
    print("Mobile number:", match.group())
else:
    print("No 10-digit mobile number found.")