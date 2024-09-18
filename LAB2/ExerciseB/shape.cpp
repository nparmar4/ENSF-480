#include "Shape.h"
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

//contructor
Shape::Shape(const Point& p, const char* name) : origin(p) {
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

//Copy contructor
Shape::Shape(const Shape& other) : origin(other.origin){
    shapeName = new char[strlen(other.shapeName)+1];
    strcpy(shapeName, other.shapeName);
}

//assignment operator
Shape& Shape::operator=(const Shape& rhs){
    if (this != &rhs){
        origin = rhs.origin;
        delete[] shapeName;

        shapeName = new char[strlen(rhs.shapeName)+1];
        strcpy(shapeName, rhs.shapeName);

    }
}

Shape::~Shape() {
    delete[] shapeName;
}


const Point& Shape::getOrigin() const {
    return origin;
}

const char* Shape::getName() const {
    return shapeName;
}

void Shape::display() const {
    cout << "Shape Name: " << shapeName << endl;
    cout << "X-coordinate: " << origin.getx() << endl;
    cout << "Y-coordinate: " << origin.gety() << endl;
}


double Shape::distance(const Shape& other) const {
    return Point::distance(this->origin, other.origin);
}


double Shape::distance(const Shape& shape1, const Shape& shape2) {
    return Point::distance(shape1.origin, shape2.origin);
    
}

void Shape::move(double dx, double dy) {
    origin.setx(origin.getx() + dx);
    origin.sety(origin.gety() + dy);
}
