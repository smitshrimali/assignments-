fav_apps = ("Instagram", "Zomato", "Spotify", "WhatsApp", "Flipkart")

# Tuples are immutable, so their elements cannot be changed after creation.
# The following line would cause a TypeError if it is executed:
# fav_apps[0] = "YouTube"

try:
    fav_apps[0] = "YouTube"
except TypeError as error:
    print("Error:", error)
    print("Tuples are immutable, so their elements cannot be changed.")