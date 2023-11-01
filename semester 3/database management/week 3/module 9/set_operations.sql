use dummydb;

select * from employees
where salary > 10000
UNION
select * from employees
where department_id = 100;

select * from employees
where salary > 10000
INTERSECT
select * from employees
where department_id = 100;

