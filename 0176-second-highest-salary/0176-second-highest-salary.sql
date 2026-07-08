select(
    select distinct salary 
    from(
        select salary,
        dense_rank() over(order by salary desc) 
        as rnk
        from employee
    ) as Rankedsalaries
    where rnk = 2
) as SecondHighestSalary