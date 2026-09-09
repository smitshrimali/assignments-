class PaymentFailedError(Exception):
    pass


def process_payment(amount):
    if amount <= 0:
        raise PaymentFailedError("Payment amount must be greater than zero.")

    print("Payment Successful")


try:
    amount = float(input("Enter payment amount: "))
    process_payment(amount)

except PaymentFailedError as error:
    print("Error:", error)

except ValueError:
    print("Error: Please enter a valid amount.")