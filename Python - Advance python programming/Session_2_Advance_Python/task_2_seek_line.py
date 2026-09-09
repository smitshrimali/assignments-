def read_next_line(filename):
    with open(filename, "r") as file:
        file.seek(20)
        print("Line from position 20:")
        print(file.readline().strip())


read_next_line("lyrics.txt")