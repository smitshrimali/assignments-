def display_friends(friends):
    for username, followers in friends.items():
        if followers >= 1000:
            print(f"{username}: {followers / 1000:.1f}K followers")
        else:
            print(f"{username}: {followers} followers")


friends = {
    "music_fan": 2300,
    "foodie": 1500,
    "traveller": 850
}

display_friends(friends)