# Write your MySQL query statement below
select distinct(l1.num) as consecutiveNums
from logs l1,logs l2,logs l3
where l2.id-1=l1.id and l3.id-1=l2.id
and l1.num=l2.num and l2.num=l3.num