-- selecting people who ordered nothing
select c.name as Customers
from Customers c
left join Orders o
on c.id = o.customerId
where o.customerid is null;
