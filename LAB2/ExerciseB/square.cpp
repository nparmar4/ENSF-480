#include "Square.h"
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;


//constructor that initializes its data members
Square::Square(const Point& p, const char* name, double side_a)
    : Shape(p, name), side_a(side_a) {}

//area
double Square::area() const {
    return side_a * side_a;
}

double Square::perimeter () const {
    return side_a *4;
}

//get and set
double Square::getSideA () const {
    return side_a;
}
void Square:: setSideA(double side){
    side_a = side;
}


//display
void Square::display() const {
    cout << "Square Name: " << getName() << endl; 
    cout << "X-coordinate: " << getOrigin().getx() << endl; 
    cout << "Y-coordinate: " << getOrigin().gety() << endl; 
    cout << "Side a: " << side_a << endl;
    cout << "Area: " << area() << endl; 
    cout << "Perimeter: " << perimeter() << endl; 
}


