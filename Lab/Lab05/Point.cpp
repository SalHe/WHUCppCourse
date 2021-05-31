// 第8章——三——(1)
#include <stdio.h>

class Point;

void showPoint(Point p);

class Point
{
private:
    int x, y;
    friend void ::showPoint(Point p);

public:
    Point(int x, int y) : x(x), y(y) {}
    ~Point() {}

    Point &operator++()
    {
        x++;
        y++;
        return *this;
    }
    Point operator++(int)
    {
        Point old(x, y);
        x++;
        y++;
        return old;
    }
    Point &operator--()
    {
        x--;
        y--;
        return *this;
    }
    Point operator--(int)
    {
        Point old(x, y);
        x--;
        y--;
        return old;
    }
};

void showPoint(Point p)
{
    printf("x=%d, y=%d\n", p.x, p.y);
}

int main(int argc, char const *argv[])
{
    Point p(1, 2);

    printf("Before p++\n");
    showPoint(p);
    printf("Doing p++\n");
    showPoint(p++);
    printf("After p++\n");
    showPoint(p);

    printf("Before ++p\n");
    showPoint(p);
    printf("Doing ++p\n");
    showPoint(++p);
    printf("After ++p\n");
    showPoint(p);

    printf("Before p--\n");
    showPoint(p);
    printf("Doing p--\n");
    showPoint(p--);
    printf("After p--\n");
    showPoint(p);

    printf("Before --p\n");
    showPoint(p);
    printf("Doing --p\n");
    showPoint(--p);
    printf("After --p\n");
    showPoint(p);

    return 0;
}
