#include <iostream>
using namespace std;

int main() {
// Data Types and Variable Declaration
    int length;
    int width;
    double area;
// Length Input
    cout << "Enter the length of the rectangle: ";
    cin >> length;
// Width Input
    cout << "Enter the width of the rectangle: ";
    cin >> width;
// Calculation of Area    
    area = length * width;

    cout << "Area of the rectangle is: " << area << endl;
    return 0;
}
