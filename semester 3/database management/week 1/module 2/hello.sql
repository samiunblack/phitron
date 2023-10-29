USE dummy;

CREATE TABLE Student(
    Roll CHAR(4) PRIMARY KEY,
    Name VARCHAR(50),
    Marks DOUBLE
);

INSERT INTO Student
(Roll, Name, Marks) VALUES(1191, "Bruce Wayne", 98.5);

UPDATE Student 
SET Name = "Peter Parker"
WHERE Roll = 1191;

DELETE FROM Student
WHERE Roll = 1191;

SELECT * from Student;



