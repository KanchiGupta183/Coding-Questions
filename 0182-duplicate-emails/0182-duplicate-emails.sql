# Write your MySQL query statement below
Select Person.email as Email
From Person
Group By email
Having count(*) > 1