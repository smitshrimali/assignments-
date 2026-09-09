import tkinter as tk

window = tk.Tk()
window.title("My Playlist")
window.geometry("400x250")


def play_song():
    status_label.config(text="Playing")


def pause_song():
    status_label.config(text="Paused")


def next_song():
    status_label.config(text="Next Song")


title_label = tk.Label(
    window,
    text="Welcome to Your Music Playlist",
    font=("Arial", 16)
)

title_label.pack(pady=20)


play_button = tk.Button(
    window,
    text="Play",
    command=play_song
)

pause_button = tk.Button(
    window,
    text="Pause",
    command=pause_song
)

next_button = tk.Button(
    window,
    text="Next",
    command=next_song
)

play_button.pack(pady=5)
pause_button.pack(pady=5)
next_button.pack(pady=5)


status_label = tk.Label(
    window,
    text="Select an action",
    font=("Arial", 12)
)

status_label.pack(pady=15)

window.mainloop()