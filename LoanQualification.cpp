#include <iostream>
using namespace std;

bool LwangaLoanCalculator(int age, double bankBalance, string crbStatus, int customerMonths) {
    return (age > 22 && bankBalance > 50000 && crbStatus == "good" && customerMonths > 6);
}

int main() {
    int age, customerMonths;
    double bankBalance;
    string crbStatus;

    cout << "Enter  your age: ";
    cin >> age;
    cout << "Enter your bank balance: ";
    cin >> bankBalance;
    cout << "Enter your CRB status (good/bad): ";
    cin >> crbStatus;
    cout << "Enter how many months you have been a customer: ";
    cin >> customerMonths;

    if (LwangaLoanCalculator(age, bankBalance, crbStatus, customerMonths)) {
        cout << "Congratulations you qualify for a loan.";
    } else {
        cout << "Unfortunately you do not qualify for a loan.";
    }
    return 0;
}