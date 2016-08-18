// Description: Class Order --> This class contains all the common information
// pertaining to different types of orders namely "To go", "Home delivery", "In
// house", "Drive through".
//
// Created by: Bhagyashree Khairnar

#include "iostream.h";

class Order
{
   public:
      Order(void){
         cout << "Creating a new Order";
      }
      ~Order(void){
         cout << "Order completed!";
      }
};

// End of File
