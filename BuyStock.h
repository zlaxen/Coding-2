#pragma once
#include "Order.h"
#ifndef BUYSTOCK_H
#define BUYSTOCK_H
#include <string>
#include <iostream>

using namespace std;
class BuyStock : public Order
{
   private:
   Stock *abcStock;

   public:
   virtual ~BuyStock()
   {
	   delete abcStock;
   }

   BuyStock(Stock *abcStock);

   virtual void execute();
};

#endif
