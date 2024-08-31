/* Write your T-SQL query statement below */
select query_name, 
Round( (
    SUM (cast(rating as float)/cast (position as float)) /  cast(count(query_name) as float)
) ,2) AS quality,

Round( (
    (cast(Count (CASE When rating<3 then 1 end) as float)  / cast(count(query_name) as float)) * 100.00
) ,2 ) As poor_query_percentage

from Queries
where 
query_name is not null
Group By query_name;
