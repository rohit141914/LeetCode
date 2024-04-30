# Write your MySQL query statement below
select Person.firstName, Person.lastName, address.city, address.state from Person left join Address on person.personID=address.personID;