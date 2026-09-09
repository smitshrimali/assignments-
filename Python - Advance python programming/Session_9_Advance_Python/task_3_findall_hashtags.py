import re


def extract_hashtags(text):
    return re.findall(r"#\w+", text)


caption = "Enjoying the weekend! #Travel #Food #Music #Weekend"

hashtags = extract_hashtags(caption)

print("Hashtags:", hashtags)