class ZomatoOrder:
    def add_item(self, item_name, quantity=1):
        print("Added", quantity, "x", item_name)


order = ZomatoOrder()

order.add_item("Pizza")
order.add_item("Burger", 2)