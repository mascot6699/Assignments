declare 
	a number(2);
begin
	a:=&a;
	a:=a * a;
	dbms_output.put_line('square='||a);
end;
/