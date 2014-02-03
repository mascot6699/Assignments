declare 
id number;
BEGIN
	id:=&sid;
  DELETE FROM sailors WHERE id = sid;
 
END;