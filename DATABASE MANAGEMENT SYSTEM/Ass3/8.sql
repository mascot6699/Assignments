declare
	num number;
	result number;
	co number;
	fab1 number;
	fab number;
	temp number;
begin
	num:=&num;
	fab:=0;
	fab1:=1;
	co:=2;
	dbms_output.put_line(fab);
	dbms_output.put_line(fab1);
	while num != co loop
	temp:=fab1+fab;
	fab:=fab1;
	fab1:=temp;
	dbms_output.put_line(temp);
	co:=co+1;
	end loop;
	
end;
/