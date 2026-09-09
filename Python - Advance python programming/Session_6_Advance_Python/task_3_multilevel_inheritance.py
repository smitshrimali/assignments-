class User:
    def __init__(self, username, email):
        self.username = username
        self.email = email


class Influencer(User):
    def __init__(self, username, email, followers):
        super().__init__(username, email)
        self.followers = followers


class VerifiedInfluencer(Influencer):
    def __init__(self, username, email, followers, badge):
        super().__init__(username, email, followers)
        self.badge = badge


influencer = VerifiedInfluencer(
    "fashion_creator",
    "creator@example.com",
    150000,
    "Verified"
)

print("Username:", influencer.username)
print("Email:", influencer.email)
print("Followers:", influencer.followers)
print("Badge:", influencer.badge)