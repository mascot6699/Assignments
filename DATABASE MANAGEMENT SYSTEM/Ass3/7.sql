declare
	num number;
	result number;
begin
	num:=&num;
	result:=num;
	while num > 1 loop
	num:=num-1;
	result:=result*num;
	end loop;
	dbms_output.put_line('result=' || result);
end;
/