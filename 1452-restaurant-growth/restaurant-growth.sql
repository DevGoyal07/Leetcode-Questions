WITH DailyTotals AS (
    SELECT 
        visited_on, 
        SUM(amount) AS daily_amount
    FROM Customer
    GROUP BY visited_on
)
SELECT 
    t1.visited_on, 
    SUM(t2.daily_amount) AS amount, 
    ROUND(AVG(t2.daily_amount), 2) AS average_amount
FROM DailyTotals t1
JOIN DailyTotals t2 
    ON DATEDIFF(t1.visited_on, t2.visited_on) BETWEEN 0 AND 6
GROUP BY t1.visited_on
HAVING COUNT(t2.visited_on) = 7
ORDER BY t1.visited_on;