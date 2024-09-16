#include "Rectangle.h"
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

Rectangle::Rectangle(const Point& p, const char* name, double side_a, double side_b)
    : Square(p, name, side_a), side_b(side_b) {}

double Rectangle::area() const {
    return getSideA() * side_b;
}

double Rectangle::perimeter() const {
    return 2 * (getSideA() + side_b);
}

double Rectangle::getSideB() const {
    return side_b;
}

void Rectangle::setSideB(double side) {
    side_b = side;
}

void Rectangle::display() const {
    cout << "Rectangle Name: " << getName() << endl; 
    cout << "X-coordinate: " << getOrigin().getx() << endl; 
    cout << "Y-coordinate: " << getOrigin().gety() << endl; 
    cout << "Width (Side a): " << getSideA() << endl; 
    cout << "Height (Side b): " << side_b << endl;
    cout << "Area: " << area() << endl; 
    cout << "Perimeter: " << perimeter() << endl; 
}
