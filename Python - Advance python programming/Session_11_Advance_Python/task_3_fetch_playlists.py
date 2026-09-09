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
        SELECT name, song_count
        FROM playlists
        WHERE song_count > 10
    """)

    playlists = cursor.fetchall()

    for playlist in playlists:
        print("Playlist:", playlist[0])
        print("Song Count:", playlist[1])
        print()

except pymysql.MySQLError as error:
    print("Database error:", error)

finally:
    if connection:
        connection.close()