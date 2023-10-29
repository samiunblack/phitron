use dummydb;

select Employees.first_name, Departments.DEPARTMENT_NAME
from Employees join Departments on Employees.DEPARTMENT_ID = Departments.DEPARTMENT_ID;

select * from Employees;

-- join employee name and manager name

select e.first_name as employee, m.first_name as manager
from Employees as e join Employees as m on e.manager_id = m.employee_id;


-- show departments where there are no employees

select departments.DEPARTMENT_NAME
from Departments left join Employees on Employees.DEPARTMENT_ID = departments.DEPARTMENT_ID
where Employees.DEPARTMENT_ID is NULL;

-- employee first name, salary, how much salary less than department average salary

select 
    Employees.first_name, 
    Employees.salary, 
    (select avg(salary) from Employees where department_id = Employees.DEPARTMENT_ID) - Employees.salary as "less than average"
from Employees join Departments on Employees.DEPARTMENT_ID = Departments.DEPARTMENT_ID;

-- show name of departments where minimum salary more than 5000

select Departments.DEPARTMENT_NAME, min(salary), avg(salary)
from Departments join Employees on Departments.department_id = Employees.department_id
group by DEPARTMENT_NAME
having min(salary) > 5000;