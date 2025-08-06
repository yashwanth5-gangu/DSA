# Write your MySQL query statement below
select distinct(l1.email) as Email
   from person l1,person l2
   where l1.email=l2.email and l1.id!=l2.id
