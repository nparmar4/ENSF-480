#include <iostream>
#include <cstring>
#include "GraphicsWorld.h"
using namespace std;

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
    std::cout << "\nTesting Functions in class Rectangle:\n";
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
    
    std::cout << "\n\nTesting copy constructor in class Rectangle:" << std::endl;
    Rectangle rec3(a);
    rec3.display();
    
    a.set_side_b(300);
    a.set_side_a(400);
    
    std::cout << "\n\nExpected to display the following values for object rec3: " << std::endl;
    std::cout << "Rectangle Name: RECTANGLE A\n"
              << "X-coordinate: 5\n"
              << "Y-coordinate: 7\n"
              << "Side a: 100\n"
              << "Side b: 200\n"
              << "Area: 20000\n"
              << "Perimeter: 600\n";
    std::cout << "\nIf it doesn't, there is a problem with your copy constructor.\n" << std::endl;
    rec3.display();
    #endif 

    // Change 0 to 1 to test using array of pointers and polymorphism
    #if 0
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

#if 0
    std::cout << "\nTesting Functions in class Circle:" << std::endl;
    Point circlePoint(3, 5); // Create a Point object for Circle constructor
    Circle c(circlePoint, 9, "CIRCLE C"); // Adjusted to match constructor
    c.display();
    std::cout << "The area of " << c.getName() << " is: " << c.area() << std::endl;
    std::cout << "The perimeter of " << c.getName() << " is: " << c.perimeter() << std::endl;

    // Assuming `Rectangle a` is defined earlier, calculate the distance
    d = a.distance(c); // Ensure 'a' is defined from the Rectangle testing
    std::cout << "\nThe distance between rectangle a and circle c is: " << d << std::endl;

    Point curveCutPoint(6, 5); 
    CurveCut rc(curveCutPoint, "CurveCut rc", 10, 12, 9); 
    rc.display();
    std::cout << "The area of " << rc.getName() << " is: " << rc.area() << std::endl;
    std::cout << "The perimeter of " << rc.getName() << " is: " << rc.perimeter() << std::endl;

    d = rc.distance(c);
    std::cout << "\nThe distance between rc and c is: " << d << std::endl;

    // Using array of Shape pointers:
    Shape* shapes[4]; // Ensure shapes array is correctly defined
    shapes[0] = &s;
    shapes[1] = &a; // Make sure `a` is defined from Rectangle testing
    shapes[2] = &c;
    shapes[3] = &rc;

    for (int i = 0; i < 4; ++i) {
        shapes[i]->display();
        std::cout << "\nThe area of " << shapes[i]->getName() << " is: " << shapes[i]->area() << std::endl;
        std::cout << "The perimeter of " << shapes[i]->getName() << " is: " << shapes[i]->perimeter() << std::endl;
    }

    std::cout << "\nTesting copy constructor in class CurveCut:" << std::endl;
    CurveCut cc = rc; // Should call the copy constructor
    cc.display();

    std::cout << "\nTesting assignment operator in class CurveCut:" << std::endl;
    CurveCut cc2(curveCutPoint, "CurveCut cc2", 100, 12, 9); 
    cc2.display();
    cc2 = cc; // Should call the assignment operator
    cc2.display();
    #endif 

    #if 1
    cout << "\n\nTesting Functions in class Circle:" << endl;
    Circle c(3, 5, 9, "CIRCLE C");
    c.display();
    cout << "The area of " << c.getName() << " is: " << c.area() << endl;
    cout << "The perimeter of " << c.getName() << " is: " << c.perimeter() << endl;

    d = a.distance(c);
    cout << "\nThe distance between rectangle a and circle c is: " << d << endl;

    CurveCut rc(6, 5, 10, 12, 9, "CurveCut rc");
    rc.display();
    cout << "The area of " << rc.Rectangle::getName() << " is: " << rc.area() << endl;
    cout << "The perimeter of " << rc.Rectangle::getName() << " is: " << rc.perimeter() << endl;

    d = rc.Rectangle::distance(c);
    cout << "\nThe distance between rc and c is: " << d << endl;

    // Using array of Shape pointers:
    Shape* sh[4];
    sh[0] = &s;
    sh[1] = &a;
    sh[2] = &c;
    sh[3] = &rc;

    sh[0]->display();
    cout << "The area of " << sh[0]->getName() << " is: " << sh[0]->area() << endl;
    cout << "The perimeter of " << sh[0]->getName() << " is: " << sh[0]->perimeter() << endl;

    sh[1]->display();
    cout << "The area of " << sh[1]->getName() << " is: " << sh[1]->area() << endl;
    cout << "The perimeter of " << sh[1]->getName() << " is: " << sh[1]->perimeter() << endl;

    sh[2]->display();
    cout << "The area of " << sh[2]->getName() << " is: " << sh[2]->area() << endl;
    cout << "The perimeter of " << sh[2]->getName() << " is: " << sh[2]->perimeter() << endl;

    sh[3]->display();
    cout << "The area of " << sh[3]->getName() << " is: " << sh[3]->area() << endl;
    cout << "The perimeter of " << sh[3]->getName() << " is: " << sh[3]->perimeter() << endl;

    // Testing copy constructor in class CurveCut:
    cout << "\n\nTesting copy constructor in class CurveCut:" << endl;
    CurveCut cc = rc;
    cc.display();

    // Testing assignment operator in class CurveCut:
    cout << "\n\nTesting assignment operator in class CurveCut:" << endl;
    CurveCut cc2(2, 5, 10, 12, 9, "CurveCut cc2");
    cc2.display();
    cc2 = rc;
    cc2.display();
#endif


}
