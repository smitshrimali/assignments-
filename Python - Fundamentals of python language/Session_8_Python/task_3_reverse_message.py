def reverse_message(message):
    reversed_message = ""

    for character in message:
        reversed_message = character + reversed_message

    return reversed_message


message = input("Enter a message: ")

print("Reversed message:", reverse_message(message))