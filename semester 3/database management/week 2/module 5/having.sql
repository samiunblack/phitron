using dummydb;

select DEPARTMENT_ID, max(SALARY) as max_sal
from Employees
group by DEPARTMENT_ID
having max_sal > 5000;