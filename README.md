# CafeRadio
Project Cafe Radio is an effort to learn and master the basics of Object Oriented Programming. The choice of porgramming language is C++.

### Cafe Management System
Using OOP prinicples a simple cafe management system i.e. an application for handling customer requests at a coffee shop/cafe will be created! 

### Classes
  * OrderManager: A class that allows management of orders placed. This manager will maintain a list(DLL) of orders. The class methods will allow new order placement, clean up of completed orders from the list of orders and other display/management realted methods. 
  * Order (Base):  A class that contains all the common information related to different types of ("ToGo", "InHouse", "DriveThrough", "HomeDelivery", etc) order such as ID, statusOfOrder, itemsOrdered, typeOfOrder, etc.
    * HomeDelivery (Derived): A class that contains specifics related to only a HomeDelievry order type such as locationOfDelivery, driverForDelivery, timeForDelivery, etc.   
