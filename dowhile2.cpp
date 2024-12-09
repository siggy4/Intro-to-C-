#include <iostream>
using namespace std;

int main() {
    int number = 12; // Start at 12

    do {
        cout << number << " "; // Output the current number
        number += 2;           // Increment by 2
    } while (number <= 50);     // Continue as long as the number is <= 50

    cout << endl; // End the line after output
    return 0;
}