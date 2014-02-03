DECLARE
CURSOR cur is SELECT empno, ename, salary , comm FROM emp3 where dnum in ('1' , '2');
rec cur%rowtype;
BEGIN
OPEN cur;
LOOP
FETCH cur into rec;
EXIT WHEN cur%notfound;
DBMS_OUTPUT.put_line(rec.empno ||'  '||rec.ename||'  '||rec.comm);
END LOOP;
CLOSE cur;
END;
/