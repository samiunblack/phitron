use dummy;

create table Marks
(
    Roll char(4),
    CSE int,
    ME int
);

insert into Marks
(Roll, CSE, ME) values
(101, 100, 90),
(102, 90, 85),
(103, 95, 80);

select CSE + ME from Marks
where Roll = 101;