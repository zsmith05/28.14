#include "ShoppingCart.h"
#include <iostream>

// Default constructor
ShoppingCart::ShoppingCart() {
    customerName = "none";
    currentDate = "January 1, 2016";
}

// Parameterized constructor
ShoppingCart::ShoppingCart(string name, string date) {
    customerName = name;
    currentDate = date;
}

// Accessor for customer name
string ShoppingCart::GetCustomerName() const {
    return customerName;
}

// Accessor for date
string ShoppingCart::GetDate() const {
    return currentDate;
}

// Adds an item to cartItems vector
void ShoppingCart::AddItem(ItemToPurchase item) {
    cartItems.push_back(item);
}

// Removes item from cartItems vector
void ShoppingCart::RemoveItem(string name) {
    bool found = false;
    for (int i = 0; i < cartItems.size(); i++) {
        if (name == cartItems[i].GetName()) {
            cartItems.erase(cartItems.begin() + i); // Remove item from vector
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item not found in cart. Nothing removed." << endl;
    }
}


void ShoppingCart::ModifyItem(ItemToPurchase item) {
    bool found = false;
    for (int i = 0; i < cartItems.size(); i++) {
        
        if (item.GetName() == cartItems[i].GetName()) {
            if (item.GetDescription() != "none") {
                cartItems[i].SetDescription(item.GetDescription());
            }
            if (item.GetPrice() != 0) {
                cartItems[i].SetPrice(item.GetPrice());
            }
            if (item.GetQuantity() != 0) {
                cartItems[i].SetQuantity(item.GetQuantity());
            }
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Item not found in cart. Nothing modified." << endl;
    }
}


// Returns quantity of all items in cart
int ShoppingCart::GetNumItemsInCart() {
    int totalItems = 0;
    for (const auto& item : cartItems) {
        totalItems += item.GetQuantity();
    }
    return totalItems;
}

// Determines and returns the total cost of items in cart
double ShoppingCart::GetCostOfCart() {
    double totalCost = 0.0;
    for (const auto& item : cartItems) {
        totalCost += (item.GetQuantity() * item.GetPrice());
    }
    return totalCost;
}

// Outputs total of objects in cart
void ShoppingCart::PrintTotal() {
    cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl;
    cout << "Number of Items: " << GetNumItemsInCart() << endl << endl;

    if (cartItems.empty()) {
        cout << "SHOPPING CART IS EMPTY" << endl;
    } else {
        for (const auto& item : cartItems) {
            cout << item.GetName() << " " << item.GetQuantity() << " @ $" << item.GetPrice() 
                 << " = $" << (item.GetQuantity() * item.GetPrice()) << endl;
        }
    }

    cout << endl << "Total: $" << GetCostOfCart() << endl;
}

// Outputs each item's description
void ShoppingCart::PrintDescriptions() {
    cout << GetCustomerName() << "'s Shopping Cart - " << GetDate() << endl << endl;
    cout << "Item Descriptions" << endl;
    if (cartItems.empty()) {
        cout << "SHOPPING CART IS EMPTY" << endl;
    } else {
        for (const auto& item : cartItems) {
            cout << item.GetName() << ": " << item.GetDescription() << endl;
        }
    }
}
