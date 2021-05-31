#include <stdio.h>

#define NOT_VIRTUAL

#ifdef NOT_VIRTUAL
#define VIRTUAL 
#else
#define VIRTUAL virtual
#endif

class Vehicle
{
private:
    double maxSpeed, weight;

public:
    Vehicle(double maxSpeed, double weight) : maxSpeed(maxSpeed), weight(weight) {}

    void setMaxSpeed(double speed) { maxSpeed = speed; }
    double getMaxSpeed() { return maxSpeed; }

    void setWeight(double weight) { this->weight = weight; }
    double getWeight() { return weight; }

    VIRTUAL void run() { printf("Vehicle running...MaxSpeed = %.2f, Weight = %.2f\n", maxSpeed, weight); }
    VIRTUAL void stop() { printf("Vehicle stopped...\n"); }
};

class Bicycle : public Vehicle
{
private:
    double height;

public:
    Bicycle(double height, double maxSpeed, double weight) : height(height), Vehicle(maxSpeed, weight) {}

    VIRTUAL void run()
    {
        printf("Bicycle running...Height = %.2f:\n\t", height);
        Vehicle::run();
    }
    VIRTUAL void stop()
    {
        printf("Bicycle stopped...:\n\t");
        Vehicle::stop();
    }
};

class Motorcar : public Vehicle
{
private:
    int seatNum;

public:
    Motorcar(int seatNum, double maxSpeed, double weight) : seatNum(seatNum), Vehicle(maxSpeed, weight) {}

    VIRTUAL void run()
    {
        printf("Motorcar running...SeatNum = %d:\n\t", seatNum);
        Vehicle::run();
    }
    VIRTUAL void stop()
    {
        printf("Motorcar stopped...:\n\t");
        Vehicle::stop();
    }
};

class MotorCycle : public Motorcar, public Bicycle
{
public:
    MotorCycle(int seatNum, double height, double maxSpeed, double weight) : Motorcar(seatNum, maxSpeed, weight), Bicycle(height, maxSpeed, weight)
    {
    }

    VIRTUAL void run()
    {
        printf("MotorCycle running...:\n\t");
        Motorcar::run();
        printf("\n\t");
        Bicycle::run();
    }
    VIRTUAL void stop()
    {
        printf("Motorcar stopped...:\n\t");
        Motorcar::stop();
        printf("\n\t");
        Bicycle::stop();
    }
};

void testVehicle()
{
    Vehicle v(100, 101);
    v.run();
    v.stop();
}

void testBicycle()
{
    Bicycle v(200, 201, 202);
    v.run();
    v.stop();
}

void testMotorcar()
{
    Motorcar v(300, 301, 302);
    v.run();
    v.stop();
}

void testMotorCycle()
{
    MotorCycle v(400, 401, 402, 403);
    v.run();
    v.stop();
}

int main(int argc, char const *argv[])
{
    printf("----------------------------\n");
    testVehicle();
    printf("----------------------------\n");

    printf("----------------------------\n");
    testBicycle();
    printf("----------------------------\n");

    printf("----------------------------\n");
    testMotorcar();
    printf("----------------------------\n");

    printf("----------------------------\n");
    testMotorCycle();
    printf("----------------------------\n");

    return 0;
}
