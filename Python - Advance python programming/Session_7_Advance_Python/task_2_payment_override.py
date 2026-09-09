class Payment:
    def pay(self, amount):
        print("Paying", amount)


class UPI(Payment):
    def pay(self, amount):
        print("Paying", amount, "via UPI")


payment = Payment()
upi_payment = UPI()

payment.pay(500)
upi_payment.pay(500)