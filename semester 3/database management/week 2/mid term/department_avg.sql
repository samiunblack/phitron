use dummydb;

select departments.department_name, avg(salary)
from departments join employees on departments.department_id = employees.department_id
group by employees.department_id