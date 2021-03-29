#include <iostream>
#include <cmath>

using namespace std;

class Rectangle
{
private:
    float ax, ay;
    float bx, by;

public:
    Rectangle(float ax, float ay, float bx, float by) : ax(ax), ay(ay), bx(bx), by(by) {}
    ~Rectangle() {}

    float area() const { return abs((ax - bx) * (ay - by)); }
    void report() const
    {
        cout << "Rectangle(" << ax << ", " << ay << ")-(" << bx << ", " << by << ")"
             << " => Area: " << area() << endl;
    }
};

int main(int argc, char const *argv[])
{
    Rectangle r1(0, 0, 10, 10);
    Rectangle r2(20, 20, 10, 10);
    r1.report();
    r2.report();
    return 0;
}
