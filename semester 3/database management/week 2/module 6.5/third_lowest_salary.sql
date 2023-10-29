use dummydb;

select * from Employees
where salary = (
    select min(salary) from Employees
    where salary > (
        select min(salary) from Employees
        where salary > (
            select min(salary) from Employees
        )
    )
);