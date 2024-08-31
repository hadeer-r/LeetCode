/* Write your T-SQL query statement below */
declare @total_customer float;
select @total_customer = count(distinct customer_id) from Delivery;
select Round(
    (Sum(CASE WHEN DATEDIFF(day,First.first,D.customer_pref_delivery_date)=0 THEN 1 else 0 end) / @total_customer)*100
,2) As immediate_percentage

from Delivery as D

join (
    select customer_id, Min(order_date) as first
    from Delivery Group By customer_id
)AS First

ON D.customer_id = first.customer_id AND D.order_date = First.first
;