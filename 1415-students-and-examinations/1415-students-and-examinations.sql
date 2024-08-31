-- Write your MySQL query statement below
select s.student_id, s.student_name,  su.subject_name, count(e.subject_name) as attended_exams 
from Students as s  cross join Subjects as su left outer join Examinations as e 
on s.student_id = e.student_id and e.subject_name = su.subject_name 
group by s.student_id, s.student_name,su.subject_name
order by s.student_id, su.subject_name;