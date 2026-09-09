# Traceback Explanation
#
# The error is a NameError.
#
# The program is trying to use InvalidSeatNumberError on line 4,
# but Python cannot find any class or variable with that name.
#
# The problem is that InvalidSeatNumberError has not been defined
# before it is used.
#
# To fix the error, we need to create the custom exception class
# before using it.
#
# Example:
#
# class InvalidSeatNumberError(Exception):
#     pass
#
# After defining the class, the raise statement can use
# InvalidSeatNumberError correctly.