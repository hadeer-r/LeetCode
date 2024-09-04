/* Write your T-SQL query statement below */
DECLARE @all_product int;
SELECT @all_product = count(*) from Product;

SELECT customer_id 
From Customer 
GROUP BY customer_id
HAVING count(distinct product_key) = @all_product;