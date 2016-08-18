// Description: Class HomeDelivery --> Derived class contains specific
// information pertaining to a home delivery order. See order.h for the base
// class Order.
//
// Created by: Bhagyashree Khairnar


#include "iostream.h";

class HomeDelivery: public Order
{
   public:
      HomeDelivery(void){
         cout << "Processing Home Delivery request.";
      }
      ~HomeDelivery(void){
         cout << "Food delivered!";
      }
};

// End of File
