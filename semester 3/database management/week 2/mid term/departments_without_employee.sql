use dummydb;

select departments.DEPARTMENT_NAME
from Departments left join Employees on Employees.DEPARTMENT_ID = departments.DEPARTMENT_ID
where Employees.DEPARTMENT_ID is NULL;