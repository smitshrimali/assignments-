with open("my_fav_songs.txt", "r") as file:
    songs = file.readlines()

for number, song in enumerate(songs, start=1):
    print(f"{number}. {song.strip()}")