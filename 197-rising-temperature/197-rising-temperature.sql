# Write your MySQL query statement below
select b.id from Weather as a left outer  join Weather as b on DATEDIFF(b.recordDate,a.recordDate)=1 where b.temperature > a.temperature;