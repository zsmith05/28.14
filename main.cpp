#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"
#include "ItemToPurchase.h" 

// Zion
void PrintMenu() {
   cout << "MENU" << endl;
   cout << "a - Add item to cart" << endl;
   cout << "d - Remove item from cart" << endl;
   cout << "c - Change item quantity" << endl;
   cout << "i - Output items' descriptions" << emdl;
   cout << "o - Output shopping cart" << endl;
   cout << "q - Quit" << endl;
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
         string name;
         string description;
         int price;
         int quant;
      if(option == 'o'){
         cout << "OUTPUT SHOPPING CART" << endl;
         theCart.PrintTotal();
      }else if(option == 'i'){
         cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
         theCart.PrintDescriptions();
      }else if(option == 'a'){
         cout << "ADD ITEM TO CART" << endl;
         cout << "Enter the item name:" << endl;
         cin >> name;
         cout << "Enter the item description:" << endl;
         cin >> description;
         cout << "Enter the item price:" << endl;
         cin >> price; 
         cout << "Enter the item quantity:" << endl;
         cin >> quant;
         ItemToPurchase item = new ItemToPurchase(name, description, price, quant);
         AddItem(item);
      }else if(option == 'd'){
         cout << "REMOVE ITEM FROM CART" << endl;
         cout << "Enter name of item to remove:" << endl;
         cin >> name;
         RemoveItem(name);
      }else if (option == 'c'){
         cout << "CHANGE ITEM QUANTITY" << endl;
         cout << "Enter item name:" << endl;
         cin >> name;
         cout << "Enter the new quantity: " << endl;
         cin >> quant;
         
      }
   
}

int main() {
   string name;
   string date;
   char option;
   bool valid = true;
   cout << "Enter customer's name:" << endl;
   cin >> name;
   cout << "Enter today's date:" << endl;
   cin >> date;
   cout << "Customer's name: " << name << endl;
   cout << "Today's date: " << date << endl;
   ShoppingCart cart = new ShoppingCart(name, date);
   PrintMenu();
   
   cout << "Choose an option: " << endl;
   cin >> option;
   if ( option != 'a' || option != 'd' || option != 'c' || option != 'i' || option != 'o' || option != 'q'){
        valid = false;
        cout << "Invalid choice" << endl;
        while(!valid){
           cin >> option;
           if (option option == 'a' || option == 'd' || option == 'c' || option == 'i' || option == 'o' || option == 'q'){
              valid = true;
           }
        }
   }
   while(option != 'q'){
      ExecuteMenu(option, cart);
      PrintMenu();
      cout << "Choose an option: " << endl;
      cin >> option;
   }
   return 0;
}
