create table Gender(
 id int primary key,
 name varchar(20)
 );
 
 create table employee(
id int primary key,
name varchar(20),
nic  varchar(20),
gender_id int,
foreign key(gender_id) references gender(id)
); 