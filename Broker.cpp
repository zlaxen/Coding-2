#include "Broker.h"

using namespace std;
void Broker::takeOrder(Order *order)
{
   orderList.push_back(order);
}

void Broker::placeOrders()
{

   for (auto order : orderList)
   {
	  order->execute();
   }
   orderList.clear();
}
