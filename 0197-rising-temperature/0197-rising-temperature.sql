# Write your MySQL query statement below
select today.id as Id
from Weather yesterday,Weather today
where datediff(today.recordDate,yesterday.recordDate) = 1
and today.temperature > yesterday.temperature;
