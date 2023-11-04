use dummy;

create table Student
(
    roll char(4) primary key,
    name varchar(50)
);

create table Course
(
    courseId char(4) primary key,
    courseName varchar(50)
);

create table Enroll
(
    id char(4),
    cId char(4),
    enroll_date date,

    foreign key (id) references student(roll) on delete cascade,
    foreign key (cId) references course(courseId) on delete set null
);