age = int(input("Enter your age: "))
time = int(input("Enter the current hour (0-23): "))

if age >= 18:
    if time >= 22 or time <= 2:
        print("Order allowed")
    else:
        print("Order not allowed")
else:
    print("Order not allowed")