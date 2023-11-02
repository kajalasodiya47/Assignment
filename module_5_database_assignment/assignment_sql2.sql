use school;

create table person(
FirstName text not null,
LastName text not null,
Address varchar(40) not null,
City text not null,
Age int not null);

insert into person(FirstName,LastName,Address,City,Age) values
("Mickey","Mouse","123 Fantasy Way","Anaheim",73),
("Bat","Man","321 Cavern Ave","Gotham",54),
("Wonder","Woman","987 Truth Way","Paradise",39),
("Donald","Duck","555 Quack Street","Mallard",65),
("Bugs","Bunny","567 Carrot Street","Rascal",58),
("Wiley","Coyote","999 Acme Way","Canyon",61),
("Cat","Woman","234 Purrfect Street","Hairball",32),
("Tweety","Bird","543","Itotltaw",28);

select * from person;
