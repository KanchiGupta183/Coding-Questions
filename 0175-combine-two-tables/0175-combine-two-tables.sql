# Write your MySQL query statement below
select FirstName, LastName, City, State
from Person Left join Address
on Person.PersonId = Address.PersonId