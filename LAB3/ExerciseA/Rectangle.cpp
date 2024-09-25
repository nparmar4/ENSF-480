#include "Rectangle.h"
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

Rectangle::Rectangle(const Point& p, const char* name, double side_a, double side_b)
    : Square(p, name, side_a), side_b(side_b), Shape(p, name) {}

Rectangle::Rectangle(const Rectangle& other) : Square(other), side_b(other.side_b), Shape(other) {
}

Rectangle& Rectangle::operator=(const Rectangle& rhs) {
    if (this != &rhs) {
        Square::operator=(rhs);
        side_b = rhs.side_b;
    }
    return *this;
}

Rectangle::~Rectangle() {}

double Rectangle::area() const {
    return get_side_a() * side_b;
}

double Rectangle::perimeter() const {
    return 2 * (get_side_a() + side_b);
}

double Rectangle::get_side_b() const {
    return side_b;
}

void Rectangle::set_side_b(double side) {
    side_b = side;
}

void Rectangle::display() const {
    cout << "Rectangle Name: " << getName() << endl; 
    cout << "X-coordinate: " << getOrigin().getx() << endl; 
    cout << "Y-coordinate: " << getOrigin().gety() << endl; 
    cout << "Width (Side a): " << get_side_a() << endl; 
    cout << "Height (Side b): " << side_b << endl;
    cout << "Area: " << area() << endl; 
    cout << "Perimeter: " << perimeter() << endl; 
}
