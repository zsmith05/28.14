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
      
void ShoppingCart::AddItem(ItemToPurchase item)
{
  cartItems.push_back(item);
}

void ShoppingCart::RemoveItem(string name)
{
  
}
      
void ShoppingCart::ModifyItem(ItemToPurchase item)
{
  
}
      
int ShoppingCart::GetNumItemsInCart()
{

}
      
double ShoppingCart::GetCostOfCart()
{

}
      
void ShoppingCart::PrintTotal()
{
  int total;
  cout << customerName << "'s Shopping Cart - " << currentDate << endl;
  cout << "Number of Items: " << cartItems.size() << endl;
  
  for(int i = 0; i < cartItems.size(); i++)
  {
    total += cartItems.at(i).GetPrice();
  }

  cout << total;
}
      
void ShoppingCart::PrintDescriptions()
{
  
}

