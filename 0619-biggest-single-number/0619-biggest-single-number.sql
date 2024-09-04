/* Write your T-SQL query statement below */
select 
Max(num) as num
from (
    select num , count(*) as cnt from MyNumbers group by num
) as A 
where cnt =1;
