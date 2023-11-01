-- https://leetcode.com/problems/customers-who-never-order/

select name as Customers 
from Customers where id not in (select c.id as Customers
from customers as c join orders as o on c.id = o.customerId);


-- https://leetcode.com/problems/employees-earning-more-than-their-managers/

select e.name as Employee
from Employee as e join Employee as m on e.managerId = m.id
where e.salary > m.salary;


-- https://leetcode.com/problems/duplicate-emails/

select email from Person
group by email
having count(email) > 1;