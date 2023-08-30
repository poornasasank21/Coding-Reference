import mysql.connector

# Replace these values with your database credentials
host = "localhost"
user = "username"
password = "root"
database = "databasename"

try:
    # Connect to the database
    connection = mysql.connector.connect(
        host="localhost",
        user="root",
        password="root",
        database="samsung"
    )
    
    if connection.is_connected():
        print("Connected to the database")
        
        # Perform database operations here
        cursor = connection.cursor()

        # Sample query to fetch data from a table
        query = "SELECT * FROM samsung.det"
        cursor.execute(query)

        # Fetch all rows
        rows = cursor.fetchall()
        for i in rows:
            print(i)
        print("{:<20} {:<20}".format("ID", "mai"))
        print("="*50)
        for row in rows:
            print("{:<20} {:<20}".format(row[0], row[1]))

        
        # Close the connection
        connection.close()
        print("Connection closed")
        
except mysql.connector.Error as e:
    print("Error:", e)
