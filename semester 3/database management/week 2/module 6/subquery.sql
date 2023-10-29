use dummydb;

-- employee details of the employees who get less salary than a certain employee

select * from Employees
where SALARY < (select SALARY from Employees where Employee_ID = 144);

-- who gets the highest salary

select * from Employees
where Salary = (select max(Salary) from Employees);