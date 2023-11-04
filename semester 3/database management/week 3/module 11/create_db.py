import mysql.connector

my_db_connection = mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="1234"
)

print(my_db_connection)


db_name = "python_test_db"
mycursor = my_db_connection.cursor()

sql_query = f'create database {db_name};'
mycursor.execute(sql_query)