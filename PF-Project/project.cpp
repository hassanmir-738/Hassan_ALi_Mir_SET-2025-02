#include <iostream>
using namespace std;

int main() {

    // Trains names 
    string trains[3] = {"Bolan Express", "Tezgam Express", "Green Line Express"};

    // Classes
    string classes[3] = {"Standard", "Economy", "Luxury"};

    // destinations with seat price
    string destinations[3] = {"Lahore", "Faisalabad", "Karachi"};
    int destPrice[3] = {1000, 1500, 3000};

    // food
    string meals[4] = {"No Meal", "Breakfast", "Lunch", "Dinner"};
    int mealPrice[4] = {0, 300, 500, 700};

    int trainChoice, classChoice, destChoice, mealChoice;
    int seats;
    int totalBill = 0;

    cout << "====== RAILWAY RESERVATION SYSTEM ======\n";

    // Train Selection
    cout << "\nSelect Train:\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << trains[i] << endl;
    }
    cout << "Enter choice: ";
    cin >> trainChoice;

    // Class
    cout << "\nSelect Class:\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << classes[i] << endl;
    }
    cout << "Enter choice: ";
    cin >> classChoice;

    // Destination Selection
    cout << "\nSelect Destination:\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". Rawalpindi to " << destinations[i]
             << " (Rs " << destPrice[i] << " per seat)\n";
    }
    cout << "Enter choice: ";
    cin >> destChoice;

    // Seat Selection
    cout << "\nEnter number of seats to book: ";
    cin >> seats;

    // Meal Selection
    cout << "\nSelect Meal:\n";
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". " << meals[i]
             << " (Rs " << mealPrice[i] << ")\n";
    }
    cout << "Enter choice: ";
    cin >> mealChoice;

    // Bill Calculation
    int ticketCost = seats * destPrice[destChoice - 1];
    int mealCost = seats * mealPrice[mealChoice - 1];

    totalBill = ticketCost + mealCost;

    // Summary
    cout << "\n========== BOOKING SUMMARY ==========\n";
    cout << "Train             : " << trains[trainChoice - 1] << endl;
    cout << "Class             : " << classes[classChoice - 1] << endl;
    cout << "Route             : Rawalpindi to " << destinations[destChoice - 1] << endl;
    cout << "Total Seats Booked: " << seats << endl;
    cout << "Meal Selected     : " << meals[mealChoice - 1] << endl;

    cout << "\n------ BILL DETAILS ------\n";
    cout << "Ticket Cost : Rs " << ticketCost << endl;
    cout << "Meal Cost   : Rs " << mealCost << endl;
    cout << "TOTAL BILL  : Rs " << totalBill << endl;

    cout << "\nThank you for using Railway Reservation System!\n";

    return 0;
}
