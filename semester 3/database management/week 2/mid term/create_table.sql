create database dummy;

use dummy;

create table Employees
(
    first_name varchar(50) not null,
    last_name varchar(50) not null,
    dob date not null,
    department_id int check(department_id > 0),
    salary int check(salary > 0)
);

create table Departments
(
    department_id int not null,
    department_name varchar(100) not null
);