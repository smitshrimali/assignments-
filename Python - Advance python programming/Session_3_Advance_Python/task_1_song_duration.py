def get_song_duration(song_name):
    song_durations = {
        "Blinding Lights": 3.20,
        "Perfect": 4.39,
        "Believer": 3.24
    }

    try:
        return song_durations[song_name]
    except KeyError:
        print("Song not found on Spotify!")


song = input("Enter song name: ")

duration = get_song_duration(song)

if duration is not None:
    print("Song duration:", duration, "minutes")