create table baza
(
   ID int not null,
   ime varchar(20) not null, 
   prezime varchar(20) not null,
   godine int,
   PRIMARY KEY(ID)
)
select * 
from baza;

INSERT INTO baza(ID,ime, prezime, godine)VALUES(1,'Stevan','Mihailovic',17);
INSERT INTO baza(ID,ime, prezime, godine)VALUES(2,'Milica','Jankov',18);
INSERT INTO baza(ID,ime, prezime, godine)VALUES(3,'Luka','Pikula',15);
INSERT INTO baza(ID,ime, prezime, godine)VALUES(4,'Aleksa','Curcic',17);
INSERT INTO baza(ID,ime, prezime, godine)VALUES(5,'Stevan','Stevanov',20);
INSERT INTO baza(ID,ime, prezime, godine)VALUES(6,'Vujadin','Pavlovic',19);
INSERT INTO baza(ID,ime, prezime, godine)VALUES(7,'Marko','Markovic',17);
INSERT INTO baza(ID,ime, prezime, godine)VALUES(8,'Djole','Djokic',18);


select ime
from baza where ime like('S%');

select *
from baza where prezime like('%u%');

select ime, prezime
from baza where godine<19;

select ime, godine
from baza where godine>=18 and godine<20;

select *
from baza where ime like('M%');

select ime, prezime, godine
from baza where prezime like('M%');

select *
from baza where ime like('%a%');

select *
from baza where ID<5;

select ime, prezime
from baza where godine>18;


