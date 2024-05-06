# Write your MySQL query statement below

# select  a.name from employee as a left join employee as b on a.managerid!=b.id where a.salary>b.salary;

select a.name as employee from employee as a left join employee as b on a.managerid=b.id where a.managerid is not null and a.salary>b.salary ;