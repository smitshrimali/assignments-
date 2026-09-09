with open("my_fav_songs.txt", "r") as file:
    songs = file.readlines()

print("Total songs:", len(songs))