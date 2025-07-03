create database dt; 
show databases;
use dt;
create table Student(Student_id int not null auto_increment primary key,Student_name varchar(100)  not null ,Age int not null,Place varchar(100)  not null );
describe Student;
insert into Student(Student_name,Age,Place) values ("akhil",20,"Trivandrum"),("Manju",18,"Ernakulam"),("Shareef",13,"palakkad"),("Praveen",32,"Thrissur"),("John",20,"Trivandrum"),("akhil",18,"ernakulam"),("Aneesh",14,"Kottayam"),("Lakshmi",20,"Kozhikode"),("Cyril",12,"Ernakulam"),("Santhosh",28,"Malappuram");
select * from Student;
Alter table Student add course varchar(100) not null;
select *from Student;
update student set course='cs' where Student_id=1;
update student set course='bca' where Student_id=2;
update student set course='maths' where Student_id=3;
update student set course='bcom' where Student_id=4;
update student set course='bba' where Student_id=5;
update student set course='cs' where Student_id=6;
update student set course='bca' where Student_id=7;
update student set course='bba' where Student_id=8;
update student set course='bcom' where Student_id=9;
update student set course='maths' where Student_id=10;
update student set course='cs' where Student_id=11;
select * from Student;
Alter table Student change column Place Address varchar(100) not null;
select *from Student;
select Student_name from Student;
update Student set Student_name="arnav" where Student_id=2;
select * from Student;
select * from Student where address='ernakulam' or Age<18;
select distinct Address from Student;
select * from Student order by Student_name desc;
select count(*) from Student where Address='ernakulam';
Alter table Student add mark int not null;
update student set mark=76 where Student_id=1;
update student set mark=67 where Student_id=2;
update student set mark=98 where Student_id=3;
update student set mark=56 where Student_id=4;
update student set mark=45 where Student_id=5;
update student set mark=87 where Student_id=6;
update student set mark=89 where Student_id=7;
update student set mark=83 where Student_id=8;
update student set mark=57 where Student_id=9;
update student set mark=78 where Student_id=10;
update student set mark=82 where Student_id=11;
select * from student;





