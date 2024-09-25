#include "CurveCut.h"
#include <iostream>
#include <cmath>

using namespace std;

// Constructor
CurveCut::CurveCut(double x, double y, double side_a, double side_b, double radius, const char* name)
    : Shape(Point(x,y), name), Rectangle(Point(x,y), name, side_a, side_b), Circle(x, y, radius, name) {
    if (radius > side_a || radius > side_b) {
        cerr << "Error: Radius must be less than or equal to the smaller of width and length." << endl;
        exit(1);
    }
}

// Copy Constructor
CurveCut::CurveCut(const CurveCut& other) : Rectangle(other), Circle(other), Shape(other.getOrigin(), other.getName()) {}

// Assignment Operator
CurveCut& CurveCut::operator=(const CurveCut& rhs) {
    if (this != &rhs) {
        Rectangle::operator=(rhs);
        Circle::operator=(rhs);
    }
    return *this;
}

CurveCut::~CurveCut() {}

double CurveCut::area() const {
    double rectArea = Rectangle::area();
    double circleCutArea = M_PI * get_radius() * get_radius() * 0.25;
    return (rectArea - circleCutArea);
}

double CurveCut::perimeter() const {
    double rectanglePerimeter = Rectangle::perimeter();
    double circleCutPerimeter = Circle::perimeter() * 0.25; 
    return (rectanglePerimeter - (2 * get_radius()) + circleCutPerimeter); 
}

void CurveCut::display() const {
    cout << "CurveCut Name: " << getName() << endl;
    cout << "X-coordinate: " << getOrigin().getx() << endl;
    cout << "Y-coordinate: " << getOrigin().gety() << endl;    
    cout << "Width: " << get_side_b() << endl;
    cout << "Length: " << get_side_a() << endl;
    cout << "Radius of the cut: " << get_radius() << endl;
}
