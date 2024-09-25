#ifndef CURVECUT_H
#define CURVECUT_H

#include "Rectangle.h"
#include "Circle.h"

class CurveCut : public Rectangle, public Circle {
public:
    CurveCut(double x, double y, double side_a, double side_b, double radius, const char* name);

    CurveCut(const CurveCut& other);

    CurveCut& operator=(const CurveCut& rhs);

    ~CurveCut();

    double area() const;

    double perimeter() const;

    void display() const;
};

#endif // CURVECUT_H
