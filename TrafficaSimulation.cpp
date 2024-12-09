#include <iostream>
using namespace std;

int main() {
    int timer;
    cout << "Enter the timer (0 = Red, 1 = Yellow, 2 = Green): ";
    cin >> timer;

    switch (timer) {
        case 0:
            cout << "The traffic light is Red. STOP!";
            break;
        case 1:
            cout << "The traffic light is Yellow. Get ready to STOP or GO!";
            break;
        case 2:
            cout << "The traffic light is Green. GO!";
            break;
        default:
            cout << "Invalid timer. Please enter 0, 1, or 2.";
    }

    return 0;
}
