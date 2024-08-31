/* Write your T-SQL query statement below */


select id, movie, description, rating 
from Cinema
where
    (id%2) != 0
And 
    description != N'boring'
ORDER BY rating DESC;