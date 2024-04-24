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

string ShoppingCart::GetCustomerName() const
{
  return customerName;
}

string ShoppingCart::GetDate() const
{
  return currentDate;
}
      
      void AddItem(ItemToPurchase item);
      void RemoveItem(string name);
      
      void ModifyItem(ItemToPurchase item);
      
      int GetNumItemsInCart();
      double GetCostOfCart();
      
      void PrintTotal();
      void PrintDescriptions();

