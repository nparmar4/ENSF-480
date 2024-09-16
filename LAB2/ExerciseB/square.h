#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"
#include "Point.h" // Ensure this is included for the Point class

class Square : public Shape {
private:
    double side_a;

public:
    // Existing constructor
    Square(const Point& p, const char* name, double side_a);

    // New constructor
    Square(int x, int y, double side_a, const char* name);

    double area() const;

    double perimeter() const;

    double get_side_a() const;
    void set_side_a(double side);

    void display() const;
};

#endif // SQUARE_H
