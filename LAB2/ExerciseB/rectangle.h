#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "square.h"
#include "shape.h"

class Rectangle : public Square {
private:
    double side_b;

public:
    Rectangle(const Point& p, const char* name, double side_a, double side_b);

    double area() const;

    double perimeter() const;

    double getSideB() const;
    void setSideB(double side);

    void display() const;
};

#endif
