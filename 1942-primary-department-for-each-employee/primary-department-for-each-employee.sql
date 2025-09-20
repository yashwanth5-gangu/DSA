# Write your MySQL query statement below
select employee_id,department_id
from employee
where employee_id  in (
    select employee_id
    from employee
    group by employee_id
    having count(employee_id)=1
)
or 
employee_id in(
    select employee_id
    from employee
    group by employee_id
    having count(employee_id)>1 and primary_flag='Y'
  
)
