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

    def display_profile(self):
        if self.followers >= 1000000:
            follower_count = f"{self.followers / 1000000:.1f}M"
        elif self.followers >= 1000:
            follower_count = f"{self.followers / 1000:.1f}K"
        else:
            follower_count = str(self.followers)

        print("Username:", self.username)
        print("Followers:", follower_count)
        print("Badge:", self.badge)


profile = VerifiedInfluencer(
    "creator_account",
    "creator@example.com",
    150000,
    "Verified"
)

profile.display_profile()