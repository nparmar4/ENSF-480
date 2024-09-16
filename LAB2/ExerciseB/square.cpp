#include "Square.h"
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

Square::Square(const Point& p, const char* name, double side_a)
    : Shape(p, name), side_a(side_a) {}

Square::Square(int x, int y, double side_a, const char* name)
    : Shape(Point(x, y), name), side_a(side_a) {}

double Square::area() const {
    return side_a * side_a;
}

double Square::perimeter() const {
    return side_a * 4;
}

double Square::get_side_a() const { 
    return side_a;
}

void Square::set_side_a(double side) {  
    side_a = side;
}

void Square::display() const {
    cout << "Square Name: " << getName() << endl;
    cout << "X-coordinate: " << getOrigin().getx() << endl;
    cout << "Y-coordinate: " << getOrigin().gety() << endl;
    cout << "Side a: " << side_a << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}
