// Description: The application for Cafe Radio. See all the classes in use
// here.
//
// Created by: Bhagyashree Khairnar

#include <iostream>
#include "include/orders/order.h"
#include "include/orders/home_delivery.h"

int main(void){

   Order *currOrderPtr = new HomeDelivery;
   delete currOrderPtr;
   return 0;
}
