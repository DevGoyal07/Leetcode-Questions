# Write your MySQL query statement below
WITH FirstYearSales AS(
    SELECT product_id, MIN(year) AS first_year
    FROM Sales
    GROUP BY product_id
)
SELECT s.product_id, fys.first_year, s.quantity, s.price
FROM Sales AS s
JOIN FirstYearSales as fys
ON s.product_id = fys.product_id
AND s.year = fys.first_year