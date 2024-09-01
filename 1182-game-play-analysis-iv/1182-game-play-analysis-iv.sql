/* Write your T-SQL query statement below */
declare @total_players float;
select @total_players = count(distinct player_id) from Activity;

select round (cast (count(*) as float)/@total_players,2) As fraction
from Activity as A
JOIN (
    Select player_id , MIN(event_date) as first from Activity GROUP BY player_id
) as B
ON 
A.player_id = B.player_id
where datediff(day,B.first, A.event_date) = 1
;
