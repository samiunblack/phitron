import mysql.connector

db_name = "python_test_db"

my_db_connection = mysql.connector.connect(
    host="localhost",
    user="root",
    passwd="1234",
    database=db_name
)

mycursor = my_db_connection.cursor()

sql_query =  f"""
    update Student set Roll = '101' where Roll = '1010';
"""
mycursor.execute(sql_query)
my_db_connection.commit()