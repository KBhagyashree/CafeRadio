// Description: Class HomeDelivery --> Derived class contains specific
// information pertaining to a home delivery order. See order.h for the base
// class Order.
//
// Created by: Bhagyashree Khairnar


#include <iostream>
#include "../../include/orders/order.h"
#include "../../include/orders/home_delivery.h"

// class HomeDelivery definitions
HomeDelivery::HomeDelivery(void){
   std::cout << "Processing Home Delivery request.\n";
}

HomeDelivery::~HomeDelivery(void){
   std::cout << "Food delivered!\n";
}

// End of File
