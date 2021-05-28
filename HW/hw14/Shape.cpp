class Shape
{
public:
    Shape() {}
    ~Shape() {}
    virtual double getArea() = 0;
};

class Rectangle : public virtual Shape
{

private:
    double width, height;

public:
    Rectangle(double width, double height) : width(width), height(height)
    {
    }

    virtual double getArea() { return width * height; }
};

class Square : public Rectangle
{
public:
    Square(double length) : Rectangle(length, length)
    {
    }
};

class Circle : public virtual Shape
{

private:
    double radius;

public:
    Circle(double radius) : radius(radius)
    {
    }

    // 这里就使用3.14作为π了，就不额外定义常量或者引入pi了
    virtual double getArea() { return radius * radius * 3.14; }
};

#include <stdio.h>

int main(int argc, char const *argv[])
{
    Rectangle rect(10, 20);
    Square square(10);
    Circle circle(10);

    printf("Rectangle: %.2f\n", rect.getArea());
    printf("Square: %.2f\n", square.getArea());
    printf("Circle: %.2f\n", circle.getArea());

    return 0;
}
