# Write your MySQL query statement below
Select em.unique_id, e.name 
From Employees as e
LEFT JOIN EmployeeUNI as em
On e.id = em.id
