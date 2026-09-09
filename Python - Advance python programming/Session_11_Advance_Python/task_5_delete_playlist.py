import pymysql


def delete_playlist(playlist_id):
    connection = None

    try:
        connection = pymysql.connect(
            host="localhost",
            user="root",
            password="YOUR_MYSQL_PASSWORD",
            database="music_stream"
        )

        cursor = connection.cursor()

        cursor.execute(
            "DELETE FROM playlists WHERE id = %s",
            (playlist_id,)
        )

        connection.commit()

        if cursor.rowcount > 0:
            print("Playlist deleted successfully.")
        else:
            print("Playlist with this ID does not exist.")

    except pymysql.MySQLError as error:
        print("Database error:", error)

    finally:
        if connection:
            connection.close()


delete_playlist(1)