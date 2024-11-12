SELECT
    'Low Salary' As category,
    COUNT(CASE WHEN income < 20000 THEN 1 END) AS accounts_count
FROM
    Accounts
UNION 
SELECT
    'Average Salary' As category,
    COUNT(CASE WHEN income >= 20000 AND income <= 50000 THEN 1 END) AS accounts_count
FROM
    Accounts
UNION 
SELECT
    'High Salary' As category,
    COUNT(CASE WHEN income > 50000 THEN 1 END) AS accounts_count
FROM
    Accounts;