import random

dummy_data = []

for _ in range(50):
    # Generate a random 6-digit ID
    student_id = str(random.randint(100000, 999999))

    # Generate a random name
    first_names = ["John", "Jane", "Alice", "Bob", "Charlie", "David", "Eva", "Frank", "Grace", "Henry"]
    last_names = ["Smith", "Johnson", "Williams", "Jones", "Brown", "Davis", "Miller", "Wilson", "Moore", "Taylor"]
    name = random.choice(first_names) + " " + random.choice(last_names)

    # Generate a random list of courses
    courses = ["Math", "English", "History", "Science", "Programming", "Art", "Music", "Physical Education"]
    num_courses = random.randint(1, len(courses))
    enrolled_courses = random.sample(courses, num_courses)

    # Create the dictionary entry
    student_data = {
        'id': student_id,
        'name': name,
        'courses': enrolled_courses
    }

    dummy_data.append(student_data)

print(dummy_data)
