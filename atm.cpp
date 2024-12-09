#include <iostream>
using namespace std;

int main() {
    double accountBalance = 216942069.00;  // Example of an account balance
    double withdrawalAmount, dailyLimit = 500000.00;
    double totalWithdrawnToday = 0.00;

    cout << "Enter the amount to withdraw: ";
    cin >> withdrawalAmount;

    if (withdrawalAmount > accountBalance) {
        cout << "Error: Insufficient funds.";
    } else if (withdrawalAmount > dailyLimit) {
        cout << "Error: Exceeds daily withdrawal limit of $" << dailyLimit;
    } else if (withdrawalAmount + totalWithdrawnToday > dailyLimit) {
        cout << "Error: This transaction exceeds your daily withdrawal limit.";
    } else {
        accountBalance -= withdrawalAmount;
        totalWithdrawnToday += withdrawalAmount;
        cout << "Withdrawal successful! Remaining balance: $" << accountBalance;
    }

    return 0;
}
