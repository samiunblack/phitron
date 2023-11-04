create database StudentLibraryManagement;

use StudentLibraryManagement;

create table Student(
    roll char(3) primary key,
    name varchar(50)
);

create table Book(
    book_id char(4) primary key,
    book_name varchar(50),
    genre varchar(20)
);

create table Librarian(
    lib_id char(3) primary key,
    name varchar(50)
);

create table Borrow(
    student_id char(3),
    book_id char(4),
    borrow_date date,
    return_date date,

    foreign key (student_id) references Student(roll),
    foreign key (book_id) references Book(book_id),

    primary key (student_id, book_id)
);

create table Permission(
    book_id char(4),
    lib_id char(3),

    foreign key(book_id) references Book(book_id),
    foreign key(lib_id) references Librarian(lib_id),

    primary key(lib_id, book_id)
);