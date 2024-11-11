# Write your MySQL query statement below
-- select visits.customer_id,count(visits.customer_id) as count_no_trans from visits inner join transactions on visits.visit_id=transactions.transaction_id where transactions.amount>0 group by visits.customer_id

select customer_id , count(visits.visit_id) as count_no_trans  from visits left join transactions on visits.visit_id=transactions.visit_id where transactions.transaction_id is null group by customer_id