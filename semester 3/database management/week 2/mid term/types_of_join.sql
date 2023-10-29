use dummydb;

--show departments where there are no employees with left join
select departments.DEPARTMENT_NAME
from Departments left join Employees on Employees.DEPARTMENT_ID = departments.DEPARTMENT_ID
where Employees.DEPARTMENT_ID is NULL;

-- show departments where there are no employees with right join
select departments.DEPARTMENT_NAME
from Employees right join Departments on Employees.DEPARTMENT_ID = departments.DEPARTMENT_ID
where Employees.DEPARTMENT_ID is NULL;

-- hide departments which does not have employees with inner join
select departments.DEPARTMENT_NAME
from Employees inner join Departments on Employees.DEPARTMENT_ID = departments.DEPARTMENT_ID
group by Employees.department_id;