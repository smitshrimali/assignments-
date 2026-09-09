products = ["Mobile", "Mouse", "Laptop", "Monitor", "Keyboard"]

filtered_products = list(
    filter(lambda product: product.startswith("M"), products)
)

print("Products starting with M:", filtered_products)