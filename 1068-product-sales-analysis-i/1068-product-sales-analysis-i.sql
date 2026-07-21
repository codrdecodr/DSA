# Write your MySQL query statement below
select p1.product_name as product_name,
p2.year as year,
p2.price as price
from Product p1
right join Sales p2
on p1.product_id = p2.product_id