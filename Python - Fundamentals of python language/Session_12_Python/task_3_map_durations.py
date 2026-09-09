song_durations = [3, 4, 5, 2, 6]

durations_in_seconds = list(
    map(lambda duration: duration * 60, song_durations)
)

print("Durations in seconds:", durations_in_seconds)