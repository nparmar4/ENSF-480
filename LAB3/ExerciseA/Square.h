#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"
#include "Point.h" 

class Square : virtual public Shape {
protected:
    double side_a;

public:
    Square(const Point& p, const char* name, double side_a);
    Square(const Square& other);
    Square& operator=(const Square& rhs);

    ~Square();

    double area() const;

    double perimeter() const;

    double get_side_a() const;
    void set_side_a(double side);

    virtual void display() const;
};

#endif 
