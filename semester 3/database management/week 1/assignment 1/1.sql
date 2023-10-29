use dummy;

create table Student(
    Roll char(4) PRIMARY KEY,
    Name varchar(50) not null,
    Marks double check(Marks >= 0)
);

create table Library(
    BookName varchar(50) not null,
    whoHired char(4),
    foreign key(whoHired) references Student(Roll)
);

create table Fees
(
    Name varchar(50) not null,
    Fee int check(Fee > 0)
);