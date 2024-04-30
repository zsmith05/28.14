#include <iostream>
#include <iomanip>
using namespace std;

#include "ShoppingCart.h"

// Zion
void PrintMenu() {
   /* Type your code here */
   
}

void ExecuteMenu(char option, ShoppingCart& theCart) {
   /* Type your code here */
   
}

int main() {
   string name;
   string date;
   cout << "Enter customer's name:" << endl;
   cin >> name;
   cout << "Enter today's date:" << endl;
   cin >> date;
   cout << "Customer's name: " << name << endl;
   cout << "Today's date: " << date << endl;
   ShoppingCart cart = new ShoppingCart(name, date);
   return 0;
}
