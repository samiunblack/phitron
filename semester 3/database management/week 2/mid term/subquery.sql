use dummydb;

-- employee details of the employees who get less salary than a certain employee

select * from Employees
where SALARY < (select SALARY from Employees where Employee_ID = 144);