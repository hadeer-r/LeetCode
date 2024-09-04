/* Write your T-SQL query statement below */
select class 
from Courses
Group By class
Having count(distinct student) >= 5;