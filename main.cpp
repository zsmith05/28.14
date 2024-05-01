
#include <iostream>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"
using namespace std;
void PrintMenu() {
    cout << "MENU" << endl;
    cout << "a - Add item to cart" << endl;
    cout << "d - Remove item from cart" << endl;
    cout << "c - Change item quantity" << endl;
    cout << "i - Output items' descriptions" << endl;
    cout << "o - Output shopping cart" << endl;
    cout << "q - Quit" << endl;
}
void ExecuteMenu(char option, ShoppingCart& theCart) {
   string name, description;
    int price, quant;
   if (option == 'o'){
      cout << "OUTPUT SHOPPING CART" << endl;
      theCart.PrintTotal();   
      cout << "" << endl;
   }else if(option == 'i'){
       cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
       theCart.PrintDescriptions();
       cout << "" << endl;
       
   }else if(option == 'a'){
            cout << "ADD ITEM TO CART" << endl;
            cout << "Enter the item name:" << endl;
            getline(cin, name);
            cout << "Enter the item description:" << endl;
            getline(cin, description);
            cout << "Enter the item price:" << endl;
            cin >> price;
            cout << "Enter the item quantity:" << endl;
            cin >> quant;
            ItemToPurchase item(name, description, price, quant);
            theCart.AddItem(item);
            cout << "" << endl;

   }else if(option == 'd'){
         cout << "REMOVE ITEM FROM CART" << endl;
         cout << "Enter name of item to remove:" << endl;
         getline(cin, name);
         theCart.RemoveItem(name);
         cout << "" << endl;
   }else if(option == 'c'){
        cout << "CHANGE ITEM QUANTITY" << endl;
            cout << "Enter item name:" << endl;
            getline(cin, name);
            cout << "Enter the new quantity:" << endl;
            cin >> quant;
            ItemToPurchase item2(name, "", 0, quant);
            theCart.ModifyItem(item2);
            cout << "" << endl;
   }
}


int main() {
    string name, date;
    char option;
    cout << "Enter customer's name:" << endl;
    getline(cin, name);
    cout << "Enter today's date:" << endl;
    getline(cin, date);
    cout << "" << endl;
    cout << "Customer name: " << name << endl;
    cout << "Today's date: " << date << endl;
    
    ShoppingCart cart(name, date);
    cout << "" << endl;
    PrintMenu();
    cout << "" << endl;
   
   cout << "Choose an option:" << endl;
   cin >> option;
   cin.ignore(); // Clear input buffer
   while (option != 'q') {                             
        if (option != 'a' && option != 'd' && option != 'c' && option != 'i' && option != 'o') {     
            cout << "Choose an option:" << endl;
            cin >> option;
        } else {
            ExecuteMenu(option, cart);
            PrintMenu();
            cout << "" << endl;
            cout << "Choose an option:" << endl;
            cin >> option;
        }
        
        cin.ignore(); // Clear input buffer
   }
}
