use dummydb;

select max(salary) from Employees
where salary < (select max(salary) from Employees where salary < (select max(salary) from Employees));

select * from Employees
where salary = (
    select max(salary) from Employees
    where salary < (
        select max(salary) from Employees 
        where salary < (select max(salary) from Employees))
);