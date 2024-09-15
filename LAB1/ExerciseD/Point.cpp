/*
 *File Name: Point.cpp
 * Assignment: Lab 1 Exercise D
 * Completed by: Shahed Issa and Neha Parmar
 * Submission Date: Sept 11, 2024
 */

#include "Point.h"
#include <cstring>
#include <iostream>
using namespace std;

class Point {
    private:
        double x, y; 

    public:
        Point() : x(0), y(0) {}  

        Point(double a, double b) : x(a), y(b) {}

        double get_x() const { return x; }

        double get_y() const { return y; }

        void set_x(double a) { x = a; }

        void set_y(double a) { y = a; }
};
