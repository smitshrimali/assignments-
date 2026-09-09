songs = [
    "Blinding Lights",
    "Shape of You",
    "Perfect",
    "Believer",
    "Faded"
]

with open("my_fav_songs.txt", "w") as file:
    for song in songs:
        file.write(song + "\n")

print("Songs written successfully.")