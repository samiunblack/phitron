use dummydb;

select job_id, count(*) from employees
group by job_id;