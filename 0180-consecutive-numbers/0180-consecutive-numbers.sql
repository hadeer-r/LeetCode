/* Write your T-SQL query statement below */
select distinct A.num as ConsecutiveNums
from Logs as A
INNER JOIN Logs as B ON A.id = B.id +1 
INNER JOIN Logs as C ON A.id = c.id +2

WHERE 
A.num = B.num ANd B.num = C.num;
;