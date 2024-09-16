#include "Rectangle.h"
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Constructor that initializes its data members
Rectangle::Rectangle(const Point& p, const char* name, double side_a, double side_b)
    : Square(p, name, side_a), side_b(side_b) {}

// New constructor with integer coordinates
Rectangle::Rectangle(int x, int y, double side_a, double side_b, const char* name)
    : Square(x, y, side_a, name), side_b(side_b) {}

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
