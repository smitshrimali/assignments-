import pymysql

connection = None

try:
    connection = pymysql.connect(
        host="localhost",
        user="root",
        password=""
    )

    print("Connection successful")

except pymysql.MySQLError as error:
    print("Connection failed:", error)

finally:
    if connection:
        connection.close()