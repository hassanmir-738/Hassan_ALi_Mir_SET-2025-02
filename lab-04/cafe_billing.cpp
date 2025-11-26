#include <iostream>
using namespace std;

int main() {

    // Prices of these items
    int burgerPrice = 350;
    int drinkPrice = 120;
    int friesPrice = 150;

    // Quantity of each item
    int burgers = 2;
    int drinks = 1;
    int fries = 1;

    // Total bill of these items before tax
    double totalBill = (burgers * burgerPrice) + (drinks * drinkPrice) + (fries * friesPrice);

    // 7% Sales Tax calculation
    double tax = totalBill * 7 / 100;

    // 3. Final Amount after adding tax on items
    double finalAmount = totalBill + tax;

    // 4. Average Cost Per Item
    int totalItems = burgers + drinks + fries;
    double averageCost = finalAmount / totalItems;

    cout << "Total Bill: " << totalBill << " PKR" << endl;
    cout << "7% Sales Tax: " << tax << " PKR" << endl;
    cout << "Final Amount: " << finalAmount << " PKR" << endl;
    cout << "Average Cost Per Item: " << averageCost << " PKR" << endl;

    return 0;
}
