#include "SellStock.h"

using namespace std;
SellStock::SellStock(Stock *abcStock)
{
   this->abcStock = abcStock;
}

void SellStock::execute()
{
   abcStock->sell();
}

