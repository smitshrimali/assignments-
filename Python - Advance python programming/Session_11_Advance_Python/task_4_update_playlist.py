import pymysql

connection = None

try:
    connection = pymysql.connect(
        host="localhost",
        user="root",
        password="YOUR_MYSQL_PASSWORD",
        database="music_stream"
    )

    cursor = connection.cursor()

    cursor.execute("""
        UPDATE playlists
        SET name = %s
        WHERE name = %s
    """, ("Chill Hits", "Chill Vibes"))

    connection.commit()

    if cursor.rowcount > 0:
        print("Playlist name updated successfully.")
    else:
        print("Playlist not found.")

except pymysql.MySQLError as error:
    print("Database error:", error)

finally:
    if connection:
        connection.close()