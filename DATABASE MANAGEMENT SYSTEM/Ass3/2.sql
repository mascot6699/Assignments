declare
a number(2);
b number(2);
c number(2);
begin
a:=&a;
b:=&b;
c:=a+b;
dbms_output.put_line(a|| ' + '||b||' = '||c);
end;
/