# Write your MySQL query statement below
select w1.id from weather as w1 join weather as w2 on date_add(w2.recordDate,interval 1 day) = w1.recordDate where w1.temperature>w2.temperature