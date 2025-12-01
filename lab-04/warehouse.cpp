#include <iostream>
using namespace std;

int main() {
    // Given values
    int requiredStock = 500;
    int currentStock = 420;

    // Is stock sufficient?
    cout << "Is stock sufficient? " << (currentStock >= requiredStock) << endl;

    // Is stock less than 50% of required level
    cout << "Is stock less than 50% of required? " << (currentStock < (requiredStock / 2)) << endl;

    // Is stock exactly equal to required stock
    cout << "Is stock exactly equal to required? " << (currentStock == requiredStock) << endl;

    // Is the shortage greater than 50 units
    cout << "Is shortage greater than 50 units? " << ((requiredStock - currentStock) > 50) << endl;

    return 0;
}
