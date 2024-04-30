#include <iostream>
#include "ShoppingCart.h"
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

    switch(option) {
        case 'o':
            cout << "OUTPUT SHOPPING CART" << endl;
            theCart.PrintTotal();
            break;
        case 'i':
            cout << "OUTPUT ITEMS' DESCRIPTIONS" << endl;
            theCart.PrintDescriptions();
            break;
        case 'a':
            cout << "ADD ITEM TO CART" << endl;
            cout << "Enter the item name:" << endl;
            cin.ignore();
            getline(cin, name);
            cout << "Enter the item description:" << endl;
            getline(cin, description);
            cout << "Enter the item price:" << endl;
            cin >> price;
            cout << "Enter the item quantity:" << endl;
            cin >> quant;
            ItemToPurchase item(name, description, price, quant);
            theCart.AddItem(item);
            break;
        case 'd':
            cout << "REMOVE ITEM FROM CART" << endl;
            cout << "Enter name of item to remove:" << endl;
            cin.ignore();
            getline(cin, name);
            theCart.RemoveItem(name);
            break;
        case 'c':
            cout << "CHANGE ITEM QUANTITY" << endl;
            cout << "Enter item name:" << endl;
            cin.ignore();
            getline(cin, name);
            cout << "Enter the new quantity: " << endl;
            cin >> quant;
            ItemToPurchase item2(name, "", 0, quant);
            theCart.ModifyItem(item2);
            break;
        default:
            cout << "Invalid option. Please choose again." << endl;
    }
}

int main() {
    string name, date;
    char option;
    
    cout << "Enter customer's name:" << endl;
    getline(cin, name);
    cout << "Enter today's date:" << endl;
    getline(cin, date);
    cout << "Customer's name: " << name << endl;
    cout << "Today's date: " << date << endl;
    
    ShoppingCart cart(name, date);
    PrintMenu();
    
    do {
        cout << "Choose an option: " << endl;
        cin >> option;
        ExecuteMenu(option, cart);
    } while(option != 'q');

    return 0;
}

