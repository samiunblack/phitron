select min(salary) from Employees
where salary > (select min(salary) from Employees);

create table Department(
    id char(4) primary key,
    department_name varchar(50)
);

create table Employee(
    employee_id char(4) primary key,
    name varchar(50),
    department_id char(4),

    foreign key (department_id) references Department(id) on delete set null
);

create table JobHistory(
    employee_id char(4),
    joining_date date,
    resignation_date date,

    foreign key (employee_id) references Employee(employee_id) on delete cascade
);