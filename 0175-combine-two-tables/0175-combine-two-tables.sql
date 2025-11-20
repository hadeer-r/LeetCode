/* Write your T-SQL query statement below */
select P.firstName, P.lastName, A.city, A.state 
from Person as P left join Address as A 
on P.personId = A.personId;