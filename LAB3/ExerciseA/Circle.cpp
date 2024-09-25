#include "Circle.h"
#include <iostream>
#include <cmath>
using namespace std;

//constructor
Circle::Circle(double x, double y, double radius, const char* name)
    : Shape(Point(x,y), name), radius(radius) {}

//copy constrcutor
Circle::Circle(const Circle& other) : Shape(other), radius(other.radius) {

}

//assignment operator
Circle& Circle::operator=(const Circle& rhs) {
    if (this != &rhs) {
        Shape::operator=(rhs);
        radius = rhs.radius;
    }
    return *this;
}

//destructor:
Circle::~Circle() {
}

double Circle::area() const {
    return M_PI * radius * radius;
}

double Circle::perimeter() const {
    return M_PI * radius * 2;
}

double Circle::get_radius() const { 
    return radius;
}

void Circle::set_radius(double r) {  
    radius = r;
}

void Circle::display() const {
    Shape::display();
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area() << endl;
    cout << "Perimeter: " << perimeter() << endl;
}
