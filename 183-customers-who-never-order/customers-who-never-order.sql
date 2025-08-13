select cu.name as Customers
 
from customers cu 
left join orders orr

  on cu.id=orr.customerid
  where orr.customerid is null;

