#include <iostream>
#include "GraphicsWorld.h"
#include "Point.h"
#include "Square.h"
#include "Rectangle.h"

int main() {
    GraphicsWorld gw;
    gw.run();
    return 0;
}

void GraphicsWorld::run() {
    std::cout << "made by Neha Parmar and Shahed Issa";

    // Change 0 to 1 to test Point
    #if 1
    Point m(6, 8);
    Point n(6, 8);
    n.setx(9);
    std::cout << "\nExpected to display the distance between m and n is: 3";
    std::cout << "\nThe distance between m and n is: " << m.distance(n);
    std::cout << "\nExpected second version of the distance function also print: 3";
    std::cout << "\nThe distance between m and n is again: " << Point::distance(m, n);
    #endif // end of block to test Point

    // Change 0 to 1 to test Square
    #if 1
    std::cout << "\n\nTesting Functions in class Square:" << std::endl;
    Point p1(5, 7);  // Create a Point object for Square constructor
    Square s(p1, "SQUARE - S", 12);
    s.display();
    #endif // end of block to test Square

    // Change 0 to 1 to test Rectangle
    #if 1
    std::cout << "\nTesting Functions in class Rectangle:";
    Point p2(5, 7);  // Create Point object for Rectangle constructor
    Rectangle a(p2, "RECTANGLE A", 12, 15);
    a.display();
    
    Point p3(16, 7);  // Create Point object for another Rectangle
    Rectangle b(p3, "RECTANGLE B", 8, 9);
    b.display();
    
    double d = a.distance(b);
    std::cout << "\nDistance between rectangle a and b is: " << d << std::endl;
    
    Rectangle rec1 = a;
    rec1.display();
    
    std::cout << "\nTesting assignment operator in class Rectangle:" << std::endl;
    Point p4(3, 4);  // Create Point object for another Rectangle
    Rectangle rec2(p4, "RECTANGLE rec2", 11, 7);
    rec2.display();
    rec2 = a;
    
    a.set_side_b(200);
    a.set_side_a(100);
    
    std::cout << "\nExpected to display the following values for object rec2: " << std::endl;
    std::cout << "Rectangle Name: RECTANGLE A\n"
              << "X-coordinate: 5\n"
              << "Y-coordinate: 7\n"
              << "Side a: 12\n"
              << "Side b: 15\n"
              << "Area: 180\n"
              << "Perimeter: 54\n";
    std::cout << "\nIf it doesn't, there is a problem with your assignment operator.\n" << std::endl;
    rec2.display();
    
    std::cout << "\nTesting copy constructor in class Rectangle:" << std::endl;
    Rectangle rec3(a);
    rec3.display();
    
    a.set_side_b(300);
    a.set_side_a(400);
    
    std::cout << "\nExpected to display the following values for object rec3: " << std::endl;
    std::cout << "Rectangle Name: RECTANGLE A\n"
              << "X-coordinate: 5\n"
              << "Y-coordinate: 7\n"
              << "Side a: 100\n"
              << "Side b: 200\n"
              << "Area: 20000\n"
              << "Perimeter: 600\n";
    std::cout << "\nIf it doesn't, there is a problem with your copy constructor.\n" << std::endl;
    rec3.display();
    #endif // end of block to test Rectangle

    // Change 0 to 1 to test using array of pointers and polymorphism
    #if 1
    std::cout << "\nTesting array of pointers and polymorphism:" << std::endl;
    Shape* sh[4];
    sh[0] = &s;
    sh[1] = &b;
    sh[2] = &rec1;
    sh[3] = &rec3;
    
    sh[0]->display();
    sh[1]->display();
    sh[2]->display();
    sh[3]->display();
    #endif // end of block to test array of pointers and polymorphism
}
