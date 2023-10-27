person = {'Name': 'Bruce Wayne', 'Address': 'Gotham', 'Age': 25, 'Profession': 'Batman'}

print(person['name'])
print(person.keys())
print(person.values())

for key, value in person.items():
    print(key, value)