#include <iostream>
using namespace std;

class SimpleCircle
{
private:
    int *itsRadius;

public:
    SimpleCircle(int radius)
    {
        this->itsRadius = new int(radius);
    }
    ~SimpleCircle()
    {
        delete itsRadius;
    }

    int getRadius() const { return *itsRadius; }
    void setRadius(int radius) { *itsRadius = radius; }
};

int main(int argc, char const *argv[])
{
    SimpleCircle circle(10);
    cout << "R = " << circle.getRadius() << endl;
    circle.setRadius(20);
    cout << "R = " << circle.getRadius() << endl;
    return 0;
}
