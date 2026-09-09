with open("lyrics.txt", "r") as file:
    print("Pointer before reading:", file.tell())

    first_10_characters = file.read(10)
    print("First 10 characters:", first_10_characters)

    print("Pointer after reading:", file.tell())