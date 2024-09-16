#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Square.h"
#include "Shape.h"

class Rectangle : public Square {
private:
    double side_b;

public:
    // Constructor with Point and additional parameters
    Rectangle(const Point& p, const char* name, double side_a, double side_b);

    // New constructor accepting integer coordinates and additional parameters
    Rectangle(int x, int y, double side_a, double side_b, const char* name);

    double area() const;

    double perimeter() const;

    double get_side_b() const;
    void set_side_b(double side);  

    void display() const;
};

#endif // RECTANGLE_H
