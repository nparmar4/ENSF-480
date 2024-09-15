/*
 *File Name: Point.h
 * Assignment: Lab 1 Exercise D
 * Completed by: Shahed Issa and Neha Parmar
 * Submission Date: Sept 11, 2024
 */

#ifndef POINT_H
#define POINT_H

class Point
{
private:
   friend class Human;

   double x; // x coordinate of a location on Cartisian Plain
   double y; // y coordinate of a location on Cartisian Plain

   Point();                   // PROMISES: assigns the values x=0and y=0 as default values.
   Point(double a, double b); // PROMISES: assigns the values of x=a and y=b.
   void set_x(double a);      // PROMISES: Sets the value of x = a.
   void set_y(double a);      // PROMISES: Sets the value of y = a.

public:
   double get_x() const;
   // PROMISES: Returns the value of the x coordinate.

   double get_y() const;
   // PROMISES: Returns the value of the y coordinate.
};

#endif // POINT_H
