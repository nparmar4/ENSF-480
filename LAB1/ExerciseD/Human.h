/*
 *File Name: Human.h
 * Assignment: Lab 1 Exercise D
 * Completed by: Shahed Issa and Neha Parmar
 * Submission Date: Sept 11, 2024
 */

#ifndef HUMAN_H
#define HUMAN_H
#include "Point.h" 

class Human {
private:
    Point location;     // Location of the Human on a Cartesian plane
    char *name;         // Name of Human

public:
    Human(); // PROMISES: Initializes the name with null and sets the location with coordinates (0,0).
   
    Human(const char *nam, double x, double y);  // PROMISES: Initializes the name with the provided string and sets the location with the provided coordinates.

    ~Human(); // PROMISES: Releases dynamically allocated memory 


    char *get_name();  // PROMISES: Returns a pointer to the name of the Human.

    void set_name(const char *name);  // PROMISES: Deletes any existing name memory and allocates new memory, then stores the new name there.

    Point get_point() const; // PROMISES: Returns a copy of the Point object (location) of the Human.

    void display(); // PROMISES: Outputs the name and location of the Human to the standard output.
};

#endif // HUMAN_H
