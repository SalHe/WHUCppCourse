class Shape
{
public:
    virtual float getArea() const = 0;
    virtual float getPerim() const = 0;
};

class Rectangle : public Shape
{
private:
    float radius, height;

public:
    Rectangle(float width, float height) : radius(width), height(height) {}

    virtual float getArea() const { return radius * height; }
    virtual float getPerim() const { return (radius + height) * 2; }
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float radius) : radius(radius) {}

    virtual float getArea() const { return radius * radius * 3.14; }
    virtual float getPerim() const { return radius * 2 * 3.14; }
};

#include <stdio.h>

int main(int argc, char const *argv[])
{
    Circle c(3);
    Rectangle r(10, 20);
    printf("Circle: Area = %.2f, Perim = %.2f\n", c.getArea(), c.getPerim());
    printf("Rectangle: Area = %.2f, Perim = %.2f\n", r.getArea(), r.getPerim());
    return 0;
}
