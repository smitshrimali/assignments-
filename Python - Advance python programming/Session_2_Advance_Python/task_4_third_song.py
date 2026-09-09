with open("playlist.txt", "r") as file:
    file.readline()
    file.readline()

    third_song = file.readline().strip()

    print("Third song:", third_song)