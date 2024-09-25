#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Square.h"

class Rectangle : public Square {
private:
    double side_b;

public:
    Rectangle(const Point& p, const char* name, double side_a, double side_b);
    Rectangle(const Rectangle& other);
    Rectangle& operator=(const Rectangle& rhs);

    ~Rectangle();

    double area() const;

    double perimeter() const;

    double get_side_b() const;
    void set_side_b(double side);  

    void display() const;
};

#endif // RECTANGLE_H
