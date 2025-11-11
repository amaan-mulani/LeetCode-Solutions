-- Need to print emails which are repeated.
select email 
from Person 
group by email 
having count(email) > 1;
