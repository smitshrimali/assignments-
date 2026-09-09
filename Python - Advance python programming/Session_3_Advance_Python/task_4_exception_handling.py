my_list = [1, 2, 3]

try:
    print(my_list[5])
except IndexError:
    print("Error: List index is out of range.")


my_dict = {"a": 1}

try:
    print(my_dict["b"])
except KeyError:
    print("Error: Dictionary key was not found.")