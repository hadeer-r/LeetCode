/* Write your T-SQL query statement below */
select format(trans_date,'yyyy-MM') as month, country,
count(*)  as trans_count,
sum(CASE when state = 'approved' THEN 1 else 0 end) as approved_count,
sum(amount) as trans_total_amount,
sum(CASE when state = 'approved' THEN amount else 0 end) as approved_total_amount
from Transactions Group By format(trans_date,'yyyy-MM'), country;