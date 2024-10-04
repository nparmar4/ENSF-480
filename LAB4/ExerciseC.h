// Moveable
#indef MOVEABLE_H
#define MOVEABLE_H
class Moveable {
public:
    virtual void forward() = 0;
    virtual void backward() = 0;
};

#endif


// Resizeable
#indef RESIZEABLE_H
#define RESIZEABLE_H

class Resizeable {
public:
    virtual void enlarge(int n) = 0;
    virtual void shrink(int n) = 0;
};

#endif

// Vehicle 
#indef VEHICLE_H
#define VEHICLE_H
class Vehicle : public Moveable {
protected:
    std::string name;
public:
    Vehicle(std::string name) : name(name) {}
    virtual void move() {}
};
#endif


// Car 
#indef CAR_H
#define CAR_H
class Car : public Vehicle {
private:
    int seats;
public:
    Car(std::string &name, int seats) : Vehicle(name), seats(seats) {}
    void turn() {}
};
