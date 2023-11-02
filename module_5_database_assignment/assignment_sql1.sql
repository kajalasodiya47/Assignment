create database school;

use school;

create table Student(
   Rollno int primary key,
   Name text,
   Branch varchar(25)
);

describe Student;

insert into Student(Rollno,Name,Branch) values
(1,"Jay","Computer Science"),
(2,"Suhani","Electronic and Com"),
(3,"Kriti","Electronic and Com");

select * from Student;

create table Exam(
  Rollno int,
  S_code text not null,
  Marks int not null,
  P_code text not null,
  foreign key(Rollno) references Student(Rollno)
  );
  
describe  Exam;
  
insert into Exam(Rollno,S_code,Marks,P_code) values
(1,"CS11",50,"CS"),
(1,"CS12",60,"CS"),
(2,"EC101",66,"EC"),
(2,"EC102",70,"EC"),
(3,"EC101",45,"EC"),
(3,"EC102",50,"EC");
  
select * from Exam;