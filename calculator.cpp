#include <iostream>
using namespace std;

int main() {
    // Declare variables
    float num1;
    float num2;
    char operation;

    // Get user input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculation based on the operator and numbers
    switch(operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error" << endl;
            }
            break;
        default:
            cout << "Invalid Sign " << endl;
    }

    return 0;
}
