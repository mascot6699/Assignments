DECLARE
CURSOR cur is SELECT * FROM sailors;
rec cur%rowtype;
BEGIN
OPEN cur;
LOOP
FETCH cur into rec;
EXIT WHEN cur%notfound;
DBMS_OUTPUT.put_line(rec.sid ||'  '||rec.sname||'  '||rec.rating||'  '||rec.age);
END LOOP;
CLOSE cur;
END;
/