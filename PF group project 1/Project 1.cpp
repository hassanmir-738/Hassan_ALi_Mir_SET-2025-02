#include <iostream>
using namespace std;

int main()
{
    int repeat;

    do
    {
        cout << "====================================\n";
        cout << "        Welcome to TourX             \n";
        cout << "    Tourist Guidance System    \n";
        cout << "====================================\n\n";

        // Declare all variables
        int placeChoice, budgetChoice, groupChoice, hotelChoice;
        int foodChoice, vehicleChoice, days;
        int OldCustomer;

        int budgetPrice = 0, groupPrice = 0, hotelPrice = 0;
        int foodPrice = 0, vehiclePrice = 0;
        int total = 0;
        float discount = 0, finalBudget = 0;

        // Tourist places using array
        string places[5] = {"Swat", "Murree", "Neelum Valley", "Gilgit", "Hunza"};

        cout << "Select Tourist Place:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << ". " << places[i] << endl;
        }
        cout << "Enter choice: ";
        cin >> placeChoice;

        // Class selection of clientt
        cout << "\nSelect Travel Budget Class:\n";
        cout << "1. Economic (Rs 5000)\n";
        cout << "2. Standard (Rs 10000)\n";
        cout << "3. Luxury (Rs 20000)\n";
        cout << "Enter choice: ";
        cin >> budgetChoice;

        switch (budgetChoice)
        {
            case 1: 
                budgetPrice = 5000; 
            break;
            case 2: 
                budgetPrice = 10000;
            break;
            case 3: 
                budgetPrice = 20000; 
            break;
        }

        // Client Group Type
        cout << "\nSelect Travel Group Type:\n";
        cout << "1. Solo (Rs 2000)\n";
        cout << "2. Friends (Rs 4000)\n";
        cout << "3. Family (Rs 6000)\n";
        cout << "Enter choice: ";
        cin >> groupChoice;

        switch (groupChoice)
        {
            case 1:
                groupPrice = 2000;
            break;
            case 2: 
                groupPrice = 4000;
            break;
            case 3: 
                groupPrice = 6000;
            break;
        }

        // Hotel category slection
        cout << "\nSelect Hotel Category:\n";
        cout << "1. Budget Hotel (Rs 3000)\n";
        cout << "2. Standard Hotel (Rs 6000)\n";
        cout << "3. Luxury Hotel (Rs 12000)\n";
        cout << "Enter choice: ";
        cin >> hotelChoice;

        switch (hotelChoice)
        {
            case 1:
                hotelPrice = 3000; 
            break;
            case 2: 
                hotelPrice = 6000; 
            break;
            case 3: 
                hotelPrice = 12000; 
            break;
        }

        // Food Pakage in tour
        cout << "\nSelect Food Package:\n";
        cout << "1. Breakfast (Rs 1000)\n";
        cout << "2. Lunch (Rs 1500)\n";
        cout << "3. Dinner (Rs 2000)\n";
        cout << "4. Full Package (Rs 4000)\n";
        cout << "Enter choice: ";
        cin >> foodChoice;

        switch (foodChoice)
        {
            case 1: 
                foodPrice = 1000;
            break;
            case 2:    
                foodPrice = 1500; 
            break;
            case 3: 
                foodPrice = 2000; 
            break;
            case 4: 
                foodPrice = 4000; 
            break;
        }

        // Vehicle selection
        cout << "\nSelect Vehicle:\n";
        cout << "1. Bus (Rs 3000)\n";
        cout << "2. Car (Rs 7000)\n";
        cout << "3. Jeep (Rs 12000)\n";
        cout << "Enter choice: ";
        cin >> vehicleChoice;

        switch (vehicleChoice)
        {
            case 1: 
                vehiclePrice = 3000;
            break;
            case 2: 
                vehiclePrice = 7000;
            break;
            case 3: 
                vehiclePrice = 12000;
            break;
        }

        // select tour Days
        do
        {
            cout << "\nEnter Tour Duration (3 to 7 days): ";
            cin >> days;
        } while (days < 3 || days > 7);

        // Total calculation of pakage
        total = (budgetPrice + groupPrice + hotelPrice + foodPrice + vehiclePrice) * days;

        // Summary
        cout << "\n========== TOUR SUMMARY ==========\n";
        cout << "Place: " << places[placeChoice - 1] << endl;
        cout << "Days: " << days << endl;
        cout << "Total Budget: Rs " << total << endl;

        // Discount for premium client
        cout << "\nAre you our old/special customer?\n";
        cout << "1. Yes\n2. No\nEnter choice: ";
        cin >> OldCustomer;

        if (OldCustomer == 1)
        {
            discount = total * 0.20;
            finalBudget = total - discount;
            cout << "Discount: Rs " << discount << endl;
            cout << "Final Budget: Rs " << finalBudget << endl;
        }
        else
        {
            cout << "Final Budget: Rs " << total << endl;
        }

        // Repeat code for select again
        cout << "\nDo you want to plan another tour?\n";
        cout << "1. Yes\n2. No\nEnter choice: ";
        cin >> repeat;

        cout << "\n---------------------------------\n";

    } while (repeat == 1);

    cout << "Thank you for using TourX\n";
    return 0;
}
