#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

int Point::count = 1001; 

Point::Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {
    id = count++;
}

double Point::getx() const {
    return x;
}

double Point::gety() const {
    return y;
}

void Point::setx(double xCoord) {
    x = xCoord;
}

void Point::sety(double yCoord) {
    y = yCoord;
}

void Point::display() const {
    cout << "X-coordinate: " << x << endl;
    cout << "Y-coordinate: " << y << endl;
}

int Point::counter() {
    return count - 1001;
}

double Point::distance(const Point& other) const {
    return sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
}

double Point::distance(const Point& p1, const Point& p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}
