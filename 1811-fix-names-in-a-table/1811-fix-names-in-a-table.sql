/* Write your T-SQL query statement below */

SELECT  user_id, UPPER(substring(name,1,1))+LOWER(substring(name,2,LEN(name))) As name FROM users ORDER BY user_id;
