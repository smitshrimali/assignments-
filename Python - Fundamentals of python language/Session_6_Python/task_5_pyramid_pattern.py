row = 1

while row <= 4:
    spaces = 1

    while spaces <= 4 - row:
        print(" ", end="")
        spaces += 1

    stars = 1

    while stars <= (2 * row - 1):
        print("*", end="")
        stars += 1

    print()
    row += 1