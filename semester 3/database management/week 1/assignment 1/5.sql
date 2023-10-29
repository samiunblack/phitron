use dummy;

drop table Employee;

create table Employee
(
    EmployeeID int,
    FirstName varchar(50),
    LastName varchar(50),
    Age int,
    Department varchar(50)
);

insert into Employee
(EmployeeID, FirstName, LastName, Age, Department) values
(1, 'John', 'Doe', 28, 'Sales'),
(2, 'Jane', 'Smith', 32, 'Marketing'),
(3, 'Michael', 'Johnson', 35, 'Finance'),
(4, 'Sarah', 'Brown', 30, 'HR'),
(5, 'William', 'Davis', 25, 'Engineering'),
(6, 'Emily', 'Wilson', 28, 'Sales'),
(7, 'Robert', 'Lee', 33, 'Marketing'),
(8, 'Laura', 'Hall', 29, 'Finance'),
(9, 'Thomas', 'White', 31, 'HR'),
(10, 'Olivia', 'Clark', 27, 'Engineering');

select distinct Department from Employee;