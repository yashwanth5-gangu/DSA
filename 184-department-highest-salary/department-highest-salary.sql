
       with cte as( 
        select de.name as department ,ee.name as employee,ee.salary,
        max(salary) over(partition by ee.departmentid )as maxsalary
        from employee ee
        join department de
        on ee.departmentid=de.id
       )

         select Department,Employee,salary as Salary
       from cte
       where maxsalary=salary



