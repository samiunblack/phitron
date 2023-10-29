use dummydb;

select * from Employees;

select * from Employees
where hire_date > (select hire_date from Employees where first_name = 'Steven' limit 1);