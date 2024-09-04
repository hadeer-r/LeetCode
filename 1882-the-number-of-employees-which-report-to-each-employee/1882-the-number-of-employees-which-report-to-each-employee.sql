/* Write your T-SQL query statement below */
SELECT a.employee_id, a.name , 
count(b.employee_id ) reports_count,
round(avg(cast (b.age as float)),0) average_age
from Employees as a
Join Employees as b
ON a.employee_id = b.reports_to
group by a.employee_id, a.name
ORDER BY a.employee_id;

