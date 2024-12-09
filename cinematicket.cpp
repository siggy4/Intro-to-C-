#include <iostream>
using namespace std;

int main() {
    int age;
    string movieType;
    double ticketPrice = 0.0;

    cout << "Enter the customer's age: ";
    cin >> age;
    cout << "Enter the movie type (regular or 3D): ";
    cin >> movieType;

    if (age < 12) {
        ticketPrice = (movieType == "3D") ? 8.00 : 5.00;  // for children
    } else if (age >= 60) {
        ticketPrice = (movieType == "3D") ? 10.00 : 7.00; // for seniors
    } else {
        ticketPrice = (movieType == "3D") ? 12.00 : 10.00;  // for adults
    }

    cout << "The ticket price is: $" << ticketPrice << endl;

    return 0;
}
