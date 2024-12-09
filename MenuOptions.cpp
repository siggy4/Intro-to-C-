#include <iostream>
using namespace std;

const double PI = 3.14159265;  // Define a constant for pi

int main() {
    int choice;
    cout << "Choose an option:\n";
    cout << "1. Area of Circle\n2. Area of Rectangle\n3. Area of Triangle\n4. Quit\n";
    cin >> choice;

    switch (choice) {
        case 1: {  // Area of a Circle
            double radius;
            cout << "Enter radius: ";
            cin >> radius;
            double area = PI * radius * radius;  
            cout << "Area of Circle: " << area;
            break;
        }
        case 2: {  // Area of a Rectangle
            double length, width;
            cout << "Enter length and width: ";
            cin >> length >> width;
            double area = length * width;
            cout << "Area of Rectangle: " << area;
            break;
        }
        case 3: {  // Area of a Triangle
            double base, height;
            cout << "Enter base and height: ";
            cin >> base >> height;
            double area = 0.5 * base * height;
            cout << "Area of Triangle: " << area;
            break;
        }
        case 4:  // Quit the program
            cout << "The program is Quitting..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }

    return 0;
}
