/* Write your T-SQL query statement below */

select st.machine_id, Round((
    Sum(en.timestamp-st.timestamp)/Count(st.machine_id)
) ,3) AS processing_time

from Activity as st
JOIN Activity as en
ON
st.machine_id = en.machine_id 
    AND st.activity_type =N'start' 
    AND en.activity_type=N'end'
    AND st.process_id=en.process_id
    
GROUP BY st.machine_id;