import tkinter as tk

window = tk.Tk()
window.title("My Playlist")
window.geometry("400x200")

label = tk.Label(
    window,
    text="Welcome to Your Music Playlist",
    font=("Arial", 16)
)

label.pack(pady=30)

window.mainloop()