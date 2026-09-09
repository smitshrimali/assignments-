price = float(input("Enter the price of the food item: "))
quantity = int(input("Enter quantity: "))

total_bill = price * quantity

print(f"Your total bill is ₹{total_bill:.2f}")