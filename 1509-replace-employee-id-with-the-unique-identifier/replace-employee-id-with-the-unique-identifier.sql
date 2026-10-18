-- Write your PostgreSQL query statement below
select em.unique_id,e.name
from Employees e
left join EmployeeUNI em on e.id = em.id