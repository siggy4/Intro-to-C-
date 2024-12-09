#include <iostream>
using namespace std;

int main() {
    string fullName, course;
    int score;

    cout << "Enter Your Full Name: ";
    cin >>fullName; 

    cout << "Enter Your Course : ";
    cin >> course;

    cout << "Enter Your score: ";
    cin >> score;

    if (score >= 70) {
        cout << fullName << " Your score is: (" << course << ") Grade: A";
    } else if (score >= 60) {
        cout << fullName << " Your score is: (" << course << ") Grade: B";
    } else if (score >= 50) {
        cout << fullName << " Your score is: (" << course << ") Grade: C";
    } else if (score >= 40) {
        cout << fullName << " Your score is: (" << course << ") Grade: D";
    } else if (score < 40 && score >= 0) {
        cout << fullName << " Your score is: (" << course << ") Grade: F";
    } else {
        cout << "Invalid score." << endl;
    }
    return 0;
}
