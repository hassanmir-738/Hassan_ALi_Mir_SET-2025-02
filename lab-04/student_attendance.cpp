#include <iostream>
using namespace std;

int main() {
    int totalClasses = 60;
    int attended = 48;

    int requiredAttendance = 45; // 75% of 60
    int sixtyPercent = 36;       // 60% of 60

    // 1. Was the requirement met?
    cout << "1. Requirement met? "
         << ((attended >= requiredAttendance) ? "Yes" : "No") << endl;

    // 2. Did he attend more than 50 classes?
    cout << "2. Attended more than 50 classes? "
         << ((attended > 50) ? "Yes" : "No") << endl;

    // 3. Did he attend less than 60% of total classes?
    cout << "3. Attended less than 60%? "
         << ((attended < sixtyPercent) ? "Yes" : "No") << endl;

    return 0;
}
