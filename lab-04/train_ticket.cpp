#include <iostream>
using namespace std;

int main() {

    int ticketPrice = 1200;

    // 25% discount on ticket
    int discount = ticketPrice * 25 / 100;
    int afterDiscount = ticketPrice - discount;

    // 8% service charges applied 
    int serviceCharges = afterDiscount * 8 / 100;
    int afterCharges = afterDiscount + serviceCharges;

    // Online booking fees included
    int finalPrice = afterCharges + 50;

    cout << "Final Ticket Cost: " << finalPrice << " PKR";

    return 0;
}
