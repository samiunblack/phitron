use dummydb;

select first_name from employees
where salary < (select salary from employees where first_name  = 'Steven' limit 1);