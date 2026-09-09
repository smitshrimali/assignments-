import tkinter as tk

window = tk.Tk()
window.title("Music Actions")
window.geometry("400x250")


like_button = tk.Button(
    window,
    text="Like",
    width=15,
    height=2
)

share_button = tk.Button(
    window,
    text="Share",
    width=15,
    height=2
)

download_button = tk.Button(
    window,
    text="Download",
    width=15,
    height=2
)

queue_button = tk.Button(
    window,
    text="Add to Queue",
    width=15,
    height=2
)


like_button.grid(row=0, column=0, padx=10, pady=10)
share_button.grid(row=0, column=1, padx=10, pady=10)
download_button.grid(row=1, column=0, padx=10, pady=10)
queue_button.grid(row=1, column=1, padx=10, pady=10)


window.mainloop()