class InvalidCouponCodeError(Exception):
    pass


valid_codes = ["SAVE10", "WELCOME20", "FOOD50"]

coupon_code = input("Enter coupon code: ")

try:
    if coupon_code not in valid_codes:
        raise InvalidCouponCodeError("Invalid coupon code.")

    print("Coupon applied successfully.")

except InvalidCouponCodeError as error:
    print("Error:", error)