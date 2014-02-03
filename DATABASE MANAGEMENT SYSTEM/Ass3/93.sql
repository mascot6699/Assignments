DECLARE
CURSOR select * from  ( select *   from emp3 order by salary desc ) where ROWNUM <= 4;
rec cur%rowtype;
BEGIN

END;
/