/* Write your T-SQL query statement below */
select a.id  from Weather as a 
left outer join Weather as b 
on DATEDIFF(day,b.recordDate,a.recordDate)=1 where b.temperature < a.temperature;
