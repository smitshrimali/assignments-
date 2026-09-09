food_order = {
    "Pizza": 2,
    "Burger": 1,
    "Fries": 3
}

print("Food items:", food_order.keys())
print("Quantities:", food_order.values())
print("Items with quantities:")

for item, quantity in food_order.items():
    print(item, ":", quantity)