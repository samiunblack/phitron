use dummy;

create table Employee
(
    EmployeeId char(4),
    EmployeeName varchar(50),
    EmployeeSalary int,
    JoiningDate year
);

insert into Employee
(EmployeeId, EmployeeName, EmployeeSalary, JoiningDate) values
('1001', 'Bruce Wayne', 120000, 2022),
('1002', 'Peter Parker', 25000, 2023);

select * from Employee;

delete from Employee where EmployeeId = '1001';

select * from Employee;