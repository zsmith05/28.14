#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

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
