# Write your MySQL query statement below
select Department,Employee,Salary
from(
    select d.name as Department,
    e.name as Employee,
    e.salary as Salary,
    dense_rank() over (
            partition by d.name
            order by Salary desc) as rnk
    from Employee e
    join Department d
    on e.departmentID = d.id
) as rnk_tbl
where rnk <= 3;
