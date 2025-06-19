/* Write your T-SQL query statement below */
(
select A.id, 
CASE 
    When B.student is null then A.student
    Else B.student
End as student

from Seat A left Join Seat B on
A.id = B.id-1 where  A.id%2 > 0
)
UNION
(
select B.id, A.student from Seat A right Join Seat B on
A.id = B.id-1 where  A.id%2 > 0
)
order by id
;
