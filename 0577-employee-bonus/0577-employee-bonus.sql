# Write your MySQL query statement below
select employee.name,bonus.bonus from employee left join bonus on employee.empID=bonus.empID where(bonus is null || bonus <1000)