select name, bonus 
from Employee
left join Bonus 
on Employee.empID = Bonus.empId
where Bonus.bonus<1000 or Bonus.bonus is null;
