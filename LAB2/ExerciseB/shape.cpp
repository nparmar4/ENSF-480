#include "Shape.h"
#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Constructor that initializes its data members
Shape::Shape(const Point& p, const char* name) : origin(p) {
    shapeName = new char[strlen(name) + 1];
    strcpy(shapeName, name);
}

// Destructor that de-allocates memory space for shapeName 
Shape::~Shape() {
    delete[] shapeName;
}

// Reference to point origin --> cannot be modified 
const Point& Shape::getOrigin() const {
    return origin;
}

// Get name
const char* Shape::getName() const {
    return shapeName;
}

// Display
void Shape::display() const {
    cout << "Shape Name: " << shapeName << endl;
    cout << "X-coordinate: " << origin.getx() << endl;
    cout << "Y-coordinate: " << origin.gety() << endl;
}

// Distance functions 
double Shape::distance(const Shape& other) const {
    double dx = origin.getx() - other.origin.getx();
    double dy = origin.gety() - other.origin.gety();
    return std::sqrt(dx * dx + dy * dy);
}

double Shape::distance(const Shape& shape1, const Shape& shape2) {
    double dx = shape1.origin.getx() - shape2.origin.getx();
    double dy = shape1.origin.gety() - shape2.origin.gety();
    return std::sqrt(dx * dx + dy * dy);
}

// Move
void Shape::move(double dx, double dy) {
    origin.setx(origin.getx() + dx);
    origin.sety(origin.gety() + dy);
}
