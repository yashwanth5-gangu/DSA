# Write your MySQL query statement below
select s1.user_id,ifnull(round(sum(c1.action='confirmed')/count(s1.user_id),2),0.0) as confirmation_rate
from signups s1
left join confirmations c1
on s1.user_id=c1.user_id
group by s1.user_id