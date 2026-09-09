class User:
    def __init__(self, username, email):
        self.username = username
        self.email = email


user = User("music_fan", "music@example.com")

print("Username:", user.username)
print("Email:", user.email)