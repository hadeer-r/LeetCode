/* Write your T-SQL query statement below */
select teacher_id , count(distinct subject_id) As cnt 
from Teacher 
Group by teacher_id;