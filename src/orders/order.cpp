// Description: Class Order --> This class contains all the common information
// pertaining to different types of orders namely "To go", "Home delivery", "In
// house", "Drive through".
//
// Created by: Bhagyashree Khairnar

#include <iostream>
#include "../../include/orders/order.h"

//class Order definitions
Order::Order(void){
     std::cout << "Creating a new Order\n";
}

Order::~Order(void){
     std::cout << "Order completed!\n";
}

// End of File
