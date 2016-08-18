// Description: Class HomeDelivery --> Derived class contains specific
// information pertaining to a home delivery order. See order.h for the base
// class Order.
//
// Created by: Bhagyashree Khairnar


class HomeDelivery: public Order
{
   public:
      HomeDelivery(void);  // Default constructor
      ~HomeDelivery(void); // Destructor

 // TODO: To be used in latter exercises
 //  private:
 //     uint8_t deliveryLocation;
 //     string driverForDelivery;
 //     float  estimatedDeliveryTimeMins;

};

// End of File
