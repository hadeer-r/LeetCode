-- /* Write your T-SQL query statement below */
select pr.project_id, Round(
    AVG(CAST(emp.experience_years AS decimal(10,2)) )
,2) As average_years

From Project As pr inner Join Employee as emp
ON emp.employee_id = pr.employee_id
GROUP BY pr.project_id ;

-- select * From Project As pr INNER Join Employee as emp
-- ON emp.employee_id = pr.employee_id;