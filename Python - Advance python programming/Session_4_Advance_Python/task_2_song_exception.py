class SongAlreadyExistsError(Exception):
    pass


def add_song_to_playlist(song_name, playlist):
    if song_name in playlist:
        raise SongAlreadyExistsError("Song already exists in the playlist.")

    playlist.append(song_name)
    print("Song added successfully.")


playlist = ["Blinding Lights", "Perfect", "Believer"]

try:
    add_song_to_playlist("Perfect", playlist)
except SongAlreadyExistsError as error:
    print("Error:", error)

print("Playlist:", playlist)