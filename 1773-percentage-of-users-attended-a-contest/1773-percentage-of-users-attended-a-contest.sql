/* Write your T-SQL query statement below */

declare @total_user float;
select @total_user = count(*) from Users;

select  R.contest_id, Round(
    (
        (Cast (count(R.contest_id) as float) / @total_user)*100.0
    ),2
) As percentage
from Users as U
JOIN Register as R
ON
    U.user_id = R.user_id
    
Group By  R.contest_id
Order By  percentage DESC, R.contest_id ASC;
