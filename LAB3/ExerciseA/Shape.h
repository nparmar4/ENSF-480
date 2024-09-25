#ifndef SHAPE_H
#define SHAPE_H

#include "Point.h"

class Shape {
private:
    Point origin;
    char* shapeName;

public:
    Shape(const Point& p, const char* name);
    Shape(const Shape& other);
    Shape& operator=(const Shape& rhs);

    ~Shape();

    const Point& getOrigin() const;

    const char* getName() const;

    virtual void display() const;

    virtual double distance(const Shape& other) const;
    static double distance(const Shape& shape1, const Shape& shape2);

    void move(double dx, double dy);
    virtual double area() const =0 ;
    virtual double perimeter() const=0;
};

#endif
