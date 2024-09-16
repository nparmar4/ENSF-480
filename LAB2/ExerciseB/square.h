#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape {
private:
    double side_a;

public:
    Square(const Point& p, const char* name, double side_a);

    double area() const;

    double perimeter() const;

    double getSideA() const;
    void setSideA(double side);

    void display() const;
};

#endif
