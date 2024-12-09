#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName;
    string lastName;
    string favoriteMeal;
    string favoriteMovie;

    // User details
    cout << "Enter your First Name: ";
    getline(cin, firstName);
    cout << "Enter your Last Name: ";
    getline(cin, lastName);
    cout << "Enter your Favorite Meal: ";
    getline(cin, favoriteMeal);
    cout << "Enter your Favorite Movie: ";
    getline(cin, favoriteMovie);

    // Display the user profile
    cout << "\nUser Profile:\n";
    cout << "First Name: " << firstName << "\n";
    cout << "Last Name: " << lastName << "\n";
    cout << "Full Name: " << firstName << " " << lastName << "\n";
    cout << "Favorite Meal: " << favoriteMeal << "\n";
    cout << "Favorite Movie: " << favoriteMovie << "\n";

    return 0;
}