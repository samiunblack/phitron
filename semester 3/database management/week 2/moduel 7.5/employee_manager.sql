use dummydb;

select e.first_name as employee, m.first_name as manager
from employees as e join employees as m on e.manager_id = m.employee_id; 