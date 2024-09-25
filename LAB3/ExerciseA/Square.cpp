#include "Square.h"
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

//constructor
Square::Square(const Point& p, const char* name, double side_a)
    : Shape(p, name), side_a(side_a) {}

//copy constrcutor
Square::Square(const Square& other) : Shape(other), side_a(other.side_a) {

}

//assignment operator
Square& Square::operator=(const Square& rhs) {
    if (this != &rhs) {
        Shape::operator=(rhs);
        side_a = rhs.side_a;
    }
    return *this;
}

//destructor:
Square::~Square() {
}

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
