use dummydb;

select * from departments limit 5;
select * from departments limit 4, 5;

select * from departments limit 5 offset 4;