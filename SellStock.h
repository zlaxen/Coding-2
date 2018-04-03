#pragma once
#include "Order.h"
#ifndef SELLSTOCK_H
#define SELLSTOCK_H
#include <string>
#include <iostream>

using namespace std;
class SellStock : public Order
{
   private:
   Stock *abcStock;

   public:
   virtual ~SellStock()
   {
	   delete abcStock;
   }

   SellStock(Stock *abcStock);

   virtual void execute();
};

#endif
