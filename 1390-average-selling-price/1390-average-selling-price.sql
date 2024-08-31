/* Write your T-SQL query statement below */

SELECT pr.product_id, ISNULL(Round( 

    Cast(SUM(pr.price * us.units) As float) /
    Cast(SUM(us.units) As float)
    
,2),0) As average_price
FROM 
    Prices AS pr 
LEFT JOIN
    UnitsSold AS us
ON
    pr.product_id = us.product_id AND us.purchase_date <= pr.end_date AND us.purchase_date >= pr.start_date

GROUP BY pr.product_id;
