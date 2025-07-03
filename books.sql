create database litshelf;
use litshelf;
create table books(book_id int auto_increment primary key not null,title Varchar(100) not null,genre Varchar(50) not null);
describe books;
Alter table books add price varchar(100) not null;
insert into books(title,genre,price)values("The Great Gatsby","Fiction",15.99),("Python Programming","Tech",45.00),("Pride and Prejudice","Fiction",12.99),("Data Science for Beginners","Tech",39.99),("The Hobbit","Fantasy",18.50),("1984","Fiction",14.99);
select * from books;
insert into books(title,genre,price)values("The Catcher in the Rye","Fiction",13.99);
select * from books;
update books set price=49.9 where book_id=2;
select * from books;
select * from books where genre='Fiction';
select distinct title from books;
select * from books where genre='Fiction' or price=13.99;
select * from books order by title;
select * from books order by title desc;
select max(price) from books;
select min(price) from books;
select count(*) from books where price>20.00;
select sum(price) from books;
select avg(price) from books;
select * from books where price between 10.00 and 20.0;
select genre, count(*) from books group by genre having count(*)>1;






