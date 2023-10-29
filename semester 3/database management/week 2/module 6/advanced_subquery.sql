use dummydb;

-- who gets second highest salary

select * from Employees
where salary = (
    select max(salary) from Employees
    where salary < (select max(salary) from Employees)
);

-- which employees get more salary than their manager
select * from employees as EMP
where salary > (select salary from Employees as MGR where EMP.Manager_ID = MGR.Employee_ID);

-- which employees is in the same job as their manager
select * from Employees as EMP
where JOB_ID = (select JOB_ID from Employees as MGR where MGR.Employee_ID = EMP.Manager_ID);