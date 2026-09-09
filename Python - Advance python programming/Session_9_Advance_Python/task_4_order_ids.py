import re

order_ids = ["ORD1234", "ORD5678", "ORD9999", "ORD0001"]

pattern = r"^ORD\d*[02468]$"

print("Order IDs ending with an even number:")

for order_id in order_ids:
    if re.match(pattern, order_id):
        print(order_id)