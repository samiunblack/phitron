use dummydb;

with third_max_salary as 
(
    select max(salary) as salary from Employees
    where salary < (select max(salary) from Employees where salary < (select max(salary) from Employees))
)


select * from Employees
where salary = (select salary from third_max_salary);


with third_min_salary as
(
    select min(salary) as salary from Employees
    where salary > (
        select min(salary) from Employees
        where salary > (
            select min(salary) from Employees
        )
    )
)


select * from Employees
where salary = (select salary from third_min_salary);