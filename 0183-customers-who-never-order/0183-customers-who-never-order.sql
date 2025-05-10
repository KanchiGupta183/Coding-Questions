# Write your MySQL query statement below
Select Customers.name as Customers
From Customers
Left Join Orders o ON Customers.id = o.customerId
Where o.id is null