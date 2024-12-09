#include <iostream>
using namespace std;

int main() {
    int no1, no2;

    cout << "Enter two numbers: ";
    cin >> no1 >> no2;

    switch (no1 > no2) {
        case true:
            cout << "Maximum: " << no1;
            break;
        case false:
            cout << "Maximum: " << no2;
            break;
    }
    return 0;
}
