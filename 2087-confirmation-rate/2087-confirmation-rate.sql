/* Write your T-SQL query statement below */



select S.user_id, Round(

cast (count(CASE When C.action = 'confirmed' THEN 1 End) As float)/
cast (count(CASE WHEN C.action is null or C.action is not null Then 1 End) As float )
, 2) As confirmation_rate

from 
    Signups as S 
LEFT JOIN
    Confirmations as C 
on 
    S.user_id = C.user_id 
Group By 
S.user_id;