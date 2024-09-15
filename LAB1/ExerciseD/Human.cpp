/*
 *File Name: Human.cpp
 * Assignment: Lab 1 Exercise D
 * Completed by: Shahed Issa and Neha Parmar
 * Submission Date: Sept 11, 2024
 */

#include "Human.h"
#include <iostream>
#include <string.h>
using namespace std;

Human::Human() {
    strcpy(this->name, "");
    location.set_x(0);
    location.set_y(0);
}

Human::Human(const char *nam, double x, double y) : location(x, y) {
    name = new char[strlen(nam) + 1];
    strcpy(name, nam);
}   

Human::~Human() {
    delete[] name;
}

char *Human::get_name() { 
    return name; 
}
void Human::set_name(const char *name) {
    // Delete the old memory
     delete[] this->name;

    // Allocate new memory
    this->name = new char[strlen(new_name) + 1];

    // Copy the new name
    strcpy(this->name, new_name);
}

Point Human::get_point() const { 
    return location; 
}

void Human::display() {
    cout << "Human Name: " << name << "\nHuman Location: "
         << location.get_x() << " ,"
         << location.get_y() << ".\n"
         << endl;
};