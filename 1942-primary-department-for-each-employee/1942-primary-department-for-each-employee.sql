/* Write your T-SQL query statement below */

SELECT A.employee_id, B.department_id
FROM (
    SELECT employee_id, count (primary_flag) dep_cnt
    from Employee GROUP BY employee_id
) As A
INNER JOIN Employee AS B
ON A.employee_id = B.employee_id 
where B.primary_flag = N'Y'  OR A.dep_cnt = 1;