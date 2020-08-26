#include <iostream>
#include <iomanip>
#include "Rectangle.h"

using namespace std;


int main() {
    Rectangle r1(4, 40);
    Rectangle r2(3.5, 35.9);

    cout << "First rectangle" << endl;
    cout << "Width: " << r1.getWidth() << "   Height: " << r1.getHeight() << endl;
    cout << "Area: " << r1.getArea() << "    Perimeter: " << r1.getPerimeter() << endl;
    cout << "\nSecond rectangle" << endl;
    cout << "Width: " << r2.getWidth() << "    Height: " << r2.getHeight() << endl;
    cout << "Area: " << r2.getArea() << "    Perimeter: " << r2.getPerimeter() << endl;


    return 0;
}
