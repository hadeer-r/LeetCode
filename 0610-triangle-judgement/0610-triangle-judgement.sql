/* Write your T-SQL query statement below */
select x,y,z ,
    CASE
        WHEN x+y <= z THEN N'No'
        WHEN x+z <= y THEN N'No'
        WHEN z+y <= x THEN N'No'
        ELSE N'Yes'
        END
triangle
FROM Triangle;
