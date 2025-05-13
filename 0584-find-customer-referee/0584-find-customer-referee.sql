# Write your MySQL query statement below
Select C.name From Customer as C
Where referee_id <> 2 OR referee_id IS NULL;