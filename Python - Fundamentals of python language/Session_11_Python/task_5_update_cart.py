def update_cart(cart, item, qty):
    if item in cart:
        cart[item] += qty
    else:
        cart[item] = qty

    return cart


cart = {
    "Wireless Mouse": 1,
    "Keyboard": 2
}

cart = update_cart(cart, "Wireless Mouse", 1)
cart = update_cart(cart, "Headphones", 2)

print("Updated cart:", cart)