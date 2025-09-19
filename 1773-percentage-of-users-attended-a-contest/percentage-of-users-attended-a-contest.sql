# Write your MySQL query statement below
select (r1.contest_id),round(count(contest_id)*100/
(select count(*)
 from users ),
 2) as percentage
from users u1
 join register r1
on u1.user_id=r1.user_id
group by r1.contest_id
order by percentage desc,r1.contest_id asc


