use dummy;

insert into Marks
(Roll, CSE, ME) values
(104, 65, 90),
(105, 97, 85),
(106, 55, 33);

select * from Marks
where CSE >= 90;