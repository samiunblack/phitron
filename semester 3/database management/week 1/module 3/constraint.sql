use dummy;

drop table Student;

create table Student(
    Roll char(4) primary key,
    Name varchar(50) not null,
    Email varchar(60) unique,
    address varchar(255) ,
    age int check(age > 10)
);

-- create table Student(
--     Roll char(4) primary key,
--     Name varchar(50),
--     Email varchar(60),
--     address varchar(255),
--     age int,
--     primary key(Roll),
--     Constraint Name not null
--     unique(Email)
--     check(age > 10)

-- );

create table Library(
    BookName varchar(50),
    whoHired char(4),
    foreign key(whoHired) references Student(Roll)
);

insert into Student(Roll, Name, Email, Address, Age) values('0001', 'Bruce', 'brucewayne@gmail.com', '5C', 12);

update Student
set age = 25
where Roll = '0001';


create table Course(
    CourseName varchar(10),
    University varchar(10),
    Credit int,

    primary key(CourseName, University)
);
