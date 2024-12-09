#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    do {
        cout << "Enter an integer (0 to stop): ";
        cin >> number;       // Input a number from the user
        sum += number;       // Add the input to the sum
    } while (number != 0);   // Continue as long as the input is not 0

    cout << "The total sum of the entered numbers is: " << sum << endl;
    return 0;
}