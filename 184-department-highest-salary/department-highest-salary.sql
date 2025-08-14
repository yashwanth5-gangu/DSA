
       with cte as( 
        select de.name as department ,ee.name as employee,ee.salary,
        dense_rank() over(partition by ee.departmentid order by ee.salary desc  )as maxsalary
        from employee ee
        join department de
        on ee.departmentid=de.id
       )

         select Department,Employee,salary as Salary
       from cte
       where maxsalary=1



