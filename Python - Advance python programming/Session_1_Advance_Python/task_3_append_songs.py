new_songs = [
    "Counting Stars",
    "Havana"
]

with open("my_fav_songs.txt", "a") as file:
    for song in new_songs:
        file.write(song + "\n")

print("New songs added successfully.")