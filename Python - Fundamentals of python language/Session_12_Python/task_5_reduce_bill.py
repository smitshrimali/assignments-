from functools import reduce

item_prices = [120, 80, 150, 60]

total_bill = reduce(lambda total, price: total + price, item_prices)

print("Total Bill Amount:", total_bill)