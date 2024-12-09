#include <iostream>
using namespace std;

int main() {
    string fullName, course;
    int score;

    cout << "Enter student full name: ";
    cin >> fullName;
    cout << "Enter course name: ";
    cin >> course;
    cout << "Enter score: ";
    cin >> score;

    switch (score / 10) {
        case 10:
        case 9:
        case 8:
        case 7:
            cout << fullName << " Your Score is: (" << course << ") Grade: A";
            break;
        case 6:
            cout << fullName << " Your Score is: (" << course << ") Grade: B";
            break;
        case 5:
            cout << fullName << " Your Score is: (" << course << ") Grade: C";
            break;
        case 4:
            cout << fullName << " Your score is: (" << course << ") Grade: D";
            break;
        default:
            if (score < 40 && score >= 0) {
                cout << fullName << " Your Score is: (" << course << ") Grade: F";
            } else {
                cout << "Invalid score.";
            }
    }
    return 0;
}
