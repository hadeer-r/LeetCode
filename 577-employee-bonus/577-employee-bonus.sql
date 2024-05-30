# Write your MySQL query statement below
select e.name, s.bonus from Employee as e left outer join Bonus as s on e.empId = s.empId where s.bonus<1000 or s.bonus is null;