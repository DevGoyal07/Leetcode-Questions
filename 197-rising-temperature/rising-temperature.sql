# Write your MySQL query statement below
SELECT today.id
FROM Weather AS today 
INNER JOIN Weather AS yesterday 
ON SUBDATE(today.recordDate,1) = yesterday.recordDate AND today.temperature>yesterday.temperature