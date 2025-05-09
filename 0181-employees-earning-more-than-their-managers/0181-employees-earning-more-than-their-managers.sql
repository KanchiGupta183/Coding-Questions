# Write your MySQL query statement below
Select Employee.name as Employee
FROM Employee 
JOIN Employee as Manager on Employee.managerId = Manager.id
WHERE Employee.salary > Manager.salary