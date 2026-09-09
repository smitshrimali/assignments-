class User:
    def __init__(self, username, email):
        self.username = username
        self.email = email


class Influencer(User):
    def __init__(self, username, email, followers):
        super().__init__(username, email)
        self.followers = followers


influencer = Influencer("travel_creator", "creator@example.com", 25000)

print("Username:", influencer.username)
print("Email:", influencer.email)
print("Followers:", influencer.followers)