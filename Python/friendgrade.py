# people = {"Paul": "3.5", "Mickey": "3.6", "Jame": "3.7", "Namo": "3.8", "Ryuki": "3.8", "Arm": "3.9", "Kawhom": "3.9", "Bank": "3.9", "Nine": "3.9", "Team": "3.9", "Pun": "3.9",}

# name = input("Name: ")
# if name in people:
#     print(f"Grade: {people[name]}")
# else:
#     print("Not found")

import csv

name = input("Name: ")
grade = input("Grade: ")

with open("gradebook.csv", "a") as file:
    writer = csv.writer(file)
    writer.writerow([name, grade])
