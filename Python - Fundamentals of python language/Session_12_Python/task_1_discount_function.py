def get_discounted_price(price, discount_percent):
    discount_amount = price * discount_percent / 100
    final_price = price - discount_amount
    return final_price


price = 500
discount_percent = 10

final_price = get_discounted_price(price, discount_percent)

print("Original Price:", price)
print("Discount:", discount_percent, "%")
print("Final Price:", final_price)