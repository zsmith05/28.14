/* Type your code here */

#include "ShoppingCart.h"
#include <iostream>
#include <string>

using namespace std;

ShoppingCart::ShoppingCart()
{
  customerName = "";
  currentDate = "January 1, 2016";
}

ShoppingCart::ShoppingCart(string name, int date)
{
  customerName = name;
  currentDate = date;
  
}

