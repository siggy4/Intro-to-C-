#include <iostream>
using namespace std;

int main() {
    int daysLate;
    string bookType;
    double fine = 0.0;

    cout << "Enter the number of days late: ";
    cin >> daysLate;
    cout << "Enter the type of book: ";
    cin >> bookType;

    if (bookType == "regular") {
        fine = daysLate * 0.50;
    } else if (bookType == "children") {
        fine = daysLate * 0.25;
    } else if (bookType == "reference") {
        if (daysLate > 0) {
            fine = daysLate * 1.00;  // Reference books have higher late fees
        }
    } else {
        cout << "Invalid book type." << endl;
        return 1;
    }

    cout << "The late fee is: $" << fine << endl;

    return 0;
}
