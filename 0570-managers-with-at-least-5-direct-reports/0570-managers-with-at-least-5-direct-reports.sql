/* Write your T-SQL query statement below */
select a.name from Employee as a join 
(select managerId,count(managerId) as cnt from Employee group by managerId ) as b 
on a.id=b.managerId  where cnt>=5 ;