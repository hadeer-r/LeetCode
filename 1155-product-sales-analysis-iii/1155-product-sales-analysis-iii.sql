/* Write your T-SQL query statement below */
select 
S.product_id, S.first_year, B.quantity, B.price
from (
    select product_id, min(year) first_year from sales
    GROUP BY product_id
) as S
INNER JOIN
Sales as B
ON S.product_id = B.product_id and S.first_year = B.year;

