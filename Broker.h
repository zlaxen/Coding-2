#pragma once
#include "Order.h"
#ifndef BROKER_H
#define BROKER_H
#include <vector>

using namespace std;
class Broker
   {
   private:
   std::vector<Order*> orderList;

   public:
   virtual void takeOrder(Order *order);

   virtual void placeOrders();
};

#endif
