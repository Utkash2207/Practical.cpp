#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double area, side, length, width, base, height;
    const double PI = 3.14159;

    cout << "Choose a shape to calculate the area:\n";
    cout << "1. Circle\n";
    cout << "2. Square\n";
    cout << "3. Rectangle\n";
    cout << "4. Triangle\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter the radius of the circle: ";
            cin >> side;
            area = PI * pow(side, 2);
            cout << "Area of the circle: " << area << endl;
            break;

        case 2:
            cout << "Enter the side length of the square: ";
            cin >> side;
            area = pow(side, 2);
            cout << "Area of the square: " << area << endl;
            break;

        case 3:
            cout << "Enter the length of the rectangle: ";
            cin >> length;
            cout << "Enter the width of the rectangle: ";
            cin >> width;
            area = length * width;
            cout << "Area of the rectangle: " << area << endl;
            break;

        case 4:
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            area = 0.5 * base * height;
            cout << "Area of the triangle: " << area << endl;
            break;

        default:
            cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
    }

    return 0;
}
