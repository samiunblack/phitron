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
    insert into Student(Roll, Name) values('1010', 'Bruce Wayne');
"""
mycursor.execute(sql_query)
my_db_connection.commit()