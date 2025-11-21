#include <iostream>
#include <string>

using namespace std;

int main() {
    string studentName, department;
    int rollNumber;
    int englishMarks, mathMarks, physicsMarks;

    cout << "Enter Student Name: ";
    getline(cin, studentName);

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cout << "Enter Department: ";
    cin.ignore();
    getline(cin, department);

    cout << "Enter marks in English: ";
    cin >> englishMarks;

    cout << "Enter marks in Math: ";
    cin >> mathMarks;

    cout << "Enter marks in Physics: ";
    cin >> physicsMarks;

    int totalMarks = englishMarks + mathMarks + physicsMarks;
    const int MAX_MARKS = 300;

    int percentage = (totalMarks * 100) / MAX_MARKS;

    string grade;
    if (percentage >= 80) {
        grade = "A+";
    } else if (percentage >= 70) {
        grade = "A";
    } else if (percentage >= 60) {
        grade = "B";
    } else {
        grade = "C";
    }

    cout << "\n==============================\n";
    cout << "     STUDENT RESULT CARD\n";
    cout << "==============================\n";

    cout << "Name:" << "\t\t" << studentName << "\n";
    cout << "Roll No:" << "\t\t" << rollNumber << "\n";
    cout << "Department:" << "\t" << department << "\n";
    cout << "------------------------------\n";

    cout << "Subject" << "\t\t" << "Marks" << "\n";
    cout << "------------------------------\n";

    cout << "English" << "\t\t" << englishMarks << "\n";
    cout << "Math" << "\t\t" << mathMarks << "\n";
    cout << "Physics" << "\t\t" << physicsMarks << "\n";
    cout << "------------------------------\n";

    cout << "Total Marks:" << "\t" << totalMarks << "/" << MAX_MARKS << "\n";
    cout << "Percentage:" << "\t" << percentage << "%\n";
    cout << "==============================\n";

    cout << "Grade:" << "\t\t" << grade << "\n";
    cout << "==============================\n";

    cout << "Congratulations " << studentName << "!\n";
    cout << "==============================\n";

    return 0;
}