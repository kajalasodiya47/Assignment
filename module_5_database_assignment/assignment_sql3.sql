create database database1;

use database1;

create table Employee(
  Employee_id int primary key,
  First_name text not null,
  Last_name text not null,
  Salary int not null,
  Joining_date date not null,
  Department text not null);
  
describe Employee;   
  
alter table Employee
modify Joining_date datetime;
  
insert into Employee(Employee_id,First_name,Last_name,Salary,Joining_date,Department) values
(1,"John","Abraham",1000000,'2013-01-01 12:00:00',"Banking");
insert into Employee(Employee_id,First_name,Last_name,Salary,Joining_date,Department) values
(2,"Michael","Clarke",800000,"2013-01-01 12:00:00","Insurance"),
(3,"Roy","Thomas",700000,"2013-02-01 12:00:00","Banking"),
(4,"Tom","Jose",600000,"2013-02-01 12:00:00","Insurance"),
(5,"Jerry","Pinto",650000,"2013-02-01 12:00:00","Insurance"),
(6,"Philip","Mathew",750000,"2013-01-01 12:00:00","Services"),
(7,"TestName1","123",650000,"2013-01-01 12:00:00","Services"),
(8,"TestName2","Lname%",600000,"2013-02-01 12:00:00","Insurance"); 

select * from Employee;
  
create table Incentive(
     Employee_ref_id int,
     Incentive_date date not null,
     Incentive_amount int not null,
     foreign key(Employee_ref_id) references Employee(Employee_id)
     );
     
insert into Incentive(Employee_ref_id,Incentive_date,Incentive_amount) values
(1,"2013-02-01",5000),
(2,"2013-02-01",3000),
(3,"2013-02-01",4000),
(1,"2013-01-01",4500),
(2,"2013-01-01",3500);
 
 select * from Incentive;
 
 -- Get First_Name from employee table using Tom name “Employee Name”
 
 select First_name as Employee_Name from Employee;
 
-- Get FIRST_NAME, Joining Date, and Salary from employee table
 
 select First_name,Joining_date,Salary from Employee;
 
 -- Get all employee details from the employee table order by First_Name
 -- Ascending and Salary descending?
 
 select * from  Employee
 order by First_name asc, Salary desc;
 
 -- Get employee details from employee table whose first name contains ‘J’.

 select * from Employee
 where First_name like "j%";
 
 -- Get department wise maximum salary from employee table order by salary
 -- ascending?
 
 select Department, max(Salary) as Max_salary
 from Employee
 group by Department
 order by Max_salary asc;

 -- Select first_name, incentive amount from employee and incentives table for
 -- those employees who have incentives and incentive amount greater than 3000 
 
 select e.First_name, i.Incentive_amount from Employee as e 
 inner join Incentive as i on e.Employee_id = i.Employee_ref_id 
 where i.Incentive_amount > 3000;
 
-- Create After Insert trigger on Employee table which insert records in view
-- table 

 create table View(
  Employee_id int primary key,
  First_name text not null,
  Last_name text not null,
  Salary int not null,
  Joining_date datetime not null,
  Department text not null);
  
 create trigger copy_emp_data
 after insert on Employee
 for each row
 insert into View values(new.Employee_id,new.First_name,new.Last_name,new.Salary,new.Joining_date,new.Department);

 select * from View;
