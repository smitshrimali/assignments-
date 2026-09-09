from insta_utils import likes, comments

current_likes = 100
new_likes = 25

current_comments = 20
new_comments = 5

updated_likes = likes.like_count(current_likes, new_likes)
updated_comments = comments.comment_count(
    current_comments,
    new_comments
)

print("Updated likes:", updated_likes)
print("Updated comments:", updated_comments)