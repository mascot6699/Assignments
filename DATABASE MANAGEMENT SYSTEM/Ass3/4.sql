declare 
a number(3);
begin
a:=1;
<<label>>
dbms_output.put_line(a);
if a=10 then
goto exit;
end if;
a:=a+1;
goto label;
<<exit>>
a:=1;

dbms_output.put_line('for loop execution');
for a in 1 .. 10 loop
dbms_output.put_line(a);
end loop;
a:=1;

dbms_output.put_line('while loop execution');
while a < 11 loop
dbms_output.put_line(a);
a:=a+1;
end loop;
a:=1;



dbms_output.put_line(' loop execution');
loop
dbms_output.put_line(a);
exit when a = 10;
a:=a+1;
end loop;
end;
/