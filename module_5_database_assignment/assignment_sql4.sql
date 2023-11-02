use database1;

create table salesperson(
   PK_SNo int not null,
   SNAME text not null,
   CITY varchar(30) not null,
   COMM float not null );
   
create table customer(
   PK_CNM int not null,
   CNAME varchar(30) not null,
   CITY varchar(30) not null,
   RATING int not null,
   FK_SNo int not null );
   
insert into salesperson values
 (1001,"Peel","London",.12),
 (1002,"Serres","San Jose",.13),
 (1004,"Motika","London",.11),
 (1007,"Rafkin","Barcelona",.15),
 (1003,"Axelrod","New York",.1);
 
select * from salesperson;
 
insert into customer values
 (201,"Hoffman","London",100,1001),
 (202,"Giovance","Roe",200,1003),
 (203,"Liu","San Jose",300,1002),
 (204,"Grass","Barcelona",100,1002),
 (206,"Clemens","London",300,1007),
 (207,"Pereira","Roe",100,1004);
 
select * from customer;
 
 -- Names and cities of all salespeople in London with commission above 0.12
 
select SNAME,CITY from salesperson where CITY = "London" AND COMM > 0.12;

 -- All salespeople either in Barcelona or in London
 
select SNAME from salesperson where CITY = "Barcelona" OR CITY = "London";

 -- All salespeople with commission between 0.10 and 0.12.
 
select SNAME,COMM from salesperson where COMM between 0.10 and 0.12;

 -- All customers excluding those with rating <= 100 unless they are located in
 -- Roe 
 
select CNAME,RATING from customer where RATING <= 100 and city = "Roe";