#include <stdio.h>

class Point;

void showPoint(Point p);
Point operator+(Point p1, Point p2);

class Point
{
    friend void showPoint(Point);
    friend Point operator+(Point p1, Point p2);

private:
    int x, y;

public:
    Point(int x, int y) : x(x), y(y) {}
};

void showPoint(Point p)
{
    printf("X = %d, Y = %d\n", p.x, p.y);
}

Point operator+(Point p1, Point p2)
{
    Point p(p1.x + p2.x, p1.y + p2.y);
    return p;
}

int main(int argc, char const *argv[])
{
    Point p1(1, 1);
    Point p2(2, 2);
    showPoint(p1 + p2);
    return 0;
}
