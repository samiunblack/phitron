use dummy;

CREATE TABLE Student (
    StudentID INT AUTO_INCREMENT PRIMARY KEY,
    Name VARCHAR(255) NOT NULL,
    Email VARCHAR(255) NOT NULL,
    Phone VARCHAR(15),
    Address TEXT
);

CREATE TABLE Book (
    ISBN VARCHAR(13) PRIMARY KEY,
    Title VARCHAR(255) NOT NULL,
    Author VARCHAR(255) NOT NULL,
    Genre VARCHAR(50),
    TotalCopies INT NOT NULL,
    AvailableCopies INT NOT NULL
);

CREATE TABLE Borrowing (
    BorrowID INT AUTO_INCREMENT PRIMARY KEY,
    StudentID INT,
    ISBN VARCHAR(13),
    BorrowDate DATE NOT NULL,
    DueDate DATE NOT NULL,
    ReturnDate DATE,
    FOREIGN KEY (StudentID) REFERENCES Student(StudentID),
    FOREIGN KEY (ISBN) REFERENCES Book(ISBN)
);


insert into Student(StudentID, Name, Email, Phone, Address) values(1, 'Bruce Wayne', 'brucewayne@gmail.com', '10343376239', 'Wayne Manor');
insert into Student(StudentID, Name, Email, Phone, Address) values(2, 'Tony Stark', 'tonystark@gmail.com', '10269756342', 'Stark Mansion');
insert into Student(StudentID, Name, Email, Phone, Address) values(3, 'Peter Parker', 'peterparker@gmail.com', '10235475847', 'forest hills');

insert into Book(ISBN, Title, Author, Genre, TotalCopies, AvailableCopies) 
values("9780140430721", "Pride and Prejudice", "Jane Austen", "Romance", 2000, 250);
insert into Book(ISBN, Title, Author, Genre, TotalCopies, AvailableCopies) 
values("9780192823786", "The Adventures of Sherlock Holmes", "Arthur Conan Doyle", "Mystery", 5000, 670);
insert into Book(ISBN, Title, Author, Genre, TotalCopies, AvailableCopies) 
values("9780545791878", "Hunger Games", "Suzanne Collins", "Thriller", 10000, 150);



insert into Borrowing(BorrowID, StudentID, ISBN, BorrowDate, DueDate, ReturnDate) 
values(1, 3, '9780192823786', curdate(), '2023-11-17','2023-11-15');
insert into Borrowing(BorrowID, StudentID, ISBN, BorrowDate, DueDate, ReturnDate) 
values(2, 3, '9780545791878', curdate(), '2023-11-17','2023-11-15');
insert into Borrowing(BorrowID, StudentID, ISBN, BorrowDate, DueDate, ReturnDate) 
values(3, 3, '9780140430721', curdate(), '2023-11-17','2023-11-15');
insert into Borrowing(BorrowID, StudentID, ISBN, BorrowDate, DueDate, ReturnDate) 
values(4, 1, '9780140430721', '2023-11-16', '2023-11-23','2023-11-19');
insert into Borrowing(BorrowID, StudentID, ISBN, BorrowDate, DueDate, ReturnDate) 
values(5, 2, '9780192823786', '2023-11-16', '2023-11-23','2023-11-19');
insert into Borrowing(BorrowID, StudentID, ISBN, BorrowDate, DueDate, ReturnDate) 
values(6, 1, '9780545791878', '2023-11-16', '2023-11-23','2023-11-19');


-- query starts from here



insert into borrowing(StudentID, ISBN, BorrowDate, DueDate, ReturnDate)
select 3, ISBN, curdate(), '2023-11-23', '2023-11-23'
from book
order by AvailableCopies desc
limit 1;


update book
set AvailableCopies = AvailableCopies - 1
where ISBN = (select ISBN from borrowing order by BorrowID desc limit 1);

select s.name
from student as s join borrowing as b on s.StudentID = b.StudentID
group by s.name
having count(*) =
(
    select max(countBorrow)
    from (
        select count(*) as countBorrow
        from borrowing
        group by StudentID
    ) as maxBorrow
)


select book.Title
from book join Borrowing on book.ISBN = Borrowing.ISBN
where Borrowing.ReturnDate < curdate();