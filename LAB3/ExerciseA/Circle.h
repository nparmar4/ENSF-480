#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"
#include "Point.h" 

class Circle : virtual public Shape {
protected:
    double radius;

public:
    Circle(double x, double y, double radius, const char* name);
    Circle(const Circle& other);
    Circle& operator=(const Circle& rhs);

    ~Circle();

    double area() const;

    double perimeter() const;

    double get_radius() const;
    void set_radius(double radius);

    virtual void display() const;
};

#endif 
