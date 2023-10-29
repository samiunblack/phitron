use dummydb;

select Employees.first_name, Departments.DEPARTMENT_Name
from Employees, Departments
where Employees.DEPARTMENT_ID = Departments.DEPARTMENT_ID;

