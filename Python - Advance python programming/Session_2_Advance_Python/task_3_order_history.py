with open("orders.txt", "r") as file:
    for order in file:
        print("Order:", order.strip())
        print("File pointer position:", file.tell())