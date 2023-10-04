# Write your MySQL query statement below
with cte as(
select e.name as Employee, e.salary as Salary, d.name as department, MAX(Salary) OVER(Partition by e.departmentID) as max_salary
from Employee e
left join Department d
on e.departmentID=d.id)

Select department, employee, salary
from cte
where salary = max_salary