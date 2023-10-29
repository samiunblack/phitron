use dummydb;

with max_salary as (select max(salary) as salary from Employees where DEPARTMENT_ID = 20 )

select * from Employees
where salary = (select salary from max_salary);