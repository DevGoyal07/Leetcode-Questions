# Write your MySQL query statement below
WITH TIV_2015_count as(
    SELECT tiv_2015, COUNT(*) AS tiv_cnt
    FROM Insurance
    GROUP BY tiv_2015
),
Location_Count AS(
    SELECT lat, lon, COUNT(*) AS loc_cnt 
    FROM Insurance
    GROUP BY lat, lon
)
SELECT ROUND(SUM(i.tiv_2016), 2) AS tiv_2016
FROM Insurance i
JOIN TIV_2015_count t
ON i.tiv_2015 = t.tiv_2015
JOIN Location_Count as l
ON l.lat = i.lat AND l.lon=i.lon
WHERE l.loc_cnt=1 and t.tiv_cnt>1;
