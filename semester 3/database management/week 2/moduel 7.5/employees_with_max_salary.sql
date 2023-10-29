use dummydb;

select employees.first_name, jobs.job_title
from employees join jobs on employees.job_id = jobs.job_id
where employees.salary = (select max(salary) from employees);