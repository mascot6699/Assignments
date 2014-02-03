declare 
	sid number;
	rating number;
	sname varchar2(10);
	age number;
begin
	sid:=&sid;
	rating:=&rating;
	sname:=&sname;
	age:=&age;
	insert into sailors values(sid,sname,rating,age);
end;
/