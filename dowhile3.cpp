#include <iostream>
using namespace std;

int main() {
    int start = 20, end = 25; // Define the range
    int sum = 0;

    do {
        sum += start; // Add current number to sum
        start++;      // Increment to the next number
    } while (start <= end); // Continue until `start` exceeds `end`

    cout << "The sum of numbers between 20 and 25 is: " << sum << endl;
    return 0;
}