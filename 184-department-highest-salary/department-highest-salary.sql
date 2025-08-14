select de.name as Department ,ee.name as Employee,  ee.salary as Salary
from employee ee
left join department de
on ee.departmentid=de.id
where ee.salary=(
    select max(salary)
    from employee e2
    where e2.departmentid =ee.departmentid
)
