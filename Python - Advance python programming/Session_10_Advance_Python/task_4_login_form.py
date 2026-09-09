import tkinter as tk

window = tk.Tk()
window.title("Login Form")
window.geometry("400x300")


def login():
    username = username_entry.get()
    password = password_entry.get()

    if username and password:
        message_label.config(text="Login Successful")
    else:
        message_label.config(text="Please enter username and password")


username_label = tk.Label(
    window,
    text="Username"
)

username_label.grid(row=0, column=0, padx=10, pady=15)

username_entry = tk.Entry(window)
username_entry.grid(row=0, column=1, padx=10, pady=15)


password_label = tk.Label(
    window,
    text="Password"
)

password_label.grid(row=1, column=0, padx=10, pady=15)

password_entry = tk.Entry(
    window,
    show="*"
)

password_entry.grid(row=1, column=1, padx=10, pady=15)


login_button = tk.Button(
    window,
    text="Login",
    command=login
)

login_button.grid(row=2, column=0, columnspan=2, pady=15)


message_label = tk.Label(
    window,
    text=""
)

message_label.grid(row=3, column=0, columnspan=2, pady=10)


window.mainloop()