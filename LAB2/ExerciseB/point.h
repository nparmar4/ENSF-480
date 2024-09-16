#ifndef POINT_H
#define POINT_H

class Point {
private:
    static int count;   
    int id;             
    double x, y;        

public:
    Point(double xCoord, double yCoord);

    void display() const;

    static int counter();

    double distance(const Point& other) const;

    static double distance(const Point& p1, const Point& p2);

    // Getters
    double getx() const;
    double gety() const;

    // Setters
    void setx(double xCoord);
    void sety(double yCoord);
};

#endif
