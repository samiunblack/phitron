import mysql.connector

my_db = mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="1234"
)

print(my_db)