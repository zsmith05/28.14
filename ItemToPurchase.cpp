#include "ItemToPurchase.h"
using namespace std;

ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity = 0) {
        itemName = name;
        itemDescription = description;
        itemPrice = price;
        itemQuantity = quantity;
}
void ItemToPurchase::SetName(string name){
  itemName = name;
}
void ItemToPurchase::SetDescription(string description){
  itemDescription = description; 
}
void ItemToPurchase::SetPrice(int price){
  itemPrice = price;
}
void ItemToPurchase::SetQuantity(int quantity){
  itemQuantity = quantity;
}

string ItemToPurchase::GetName() const {
  return itemName;
}

string ItemToPurchase::GetDescription() const{
  return itemDescription; 
}
int ItemToPurchase::GetPrice() const{
  return itemPrice; 
}
int ItemToPurchase::GetQuantity() const{
  return itemQuantity;
}

 void PrintItemCost() const {
        cout << itemName << " " << itemQuantity << " @ $" << itemPrice << " = $" << (itemPrice * itemQuantity) << endl;
}
 void PrintItemDescription() const {
        cout << itemName << ": " << itemDescription << endl;
}





