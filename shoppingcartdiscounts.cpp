#include <iostream>
using namespace std;

int main() {
    double purchaseAmount, discount = 0.0;

    cout << "Enter the total purchase amount: ";
    cin >> purchaseAmount;

    if (purchaseAmount >= 500) {
        discount = 0.20;  
    } else if (purchaseAmount >= 200) {
        discount = 0.15;  
    } else if (purchaseAmount >= 100) {
        discount = 0.10;  
    } else {
        discount = 0.05;  
    }

    double totalCost = purchaseAmount - (purchaseAmount * discount);
    cout << "The total cost after a " << (discount * 100) << "% discount is: $" << totalCost << endl;

    return 0;
}
