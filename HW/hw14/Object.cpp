#include <stdio.h>

class Object
{
private:
    double weight;

public:
    Object(double weight) : weight(weight)
    {
        printf("Object constructing...\n");
    }
    ~Object()
    {
        printf("Object destructing...\n");
    }

    double getWeight() const { return weight; }
    void setWeight(double weight) { this->weight = weight; }
};

class Box : public Object
{
private:
    double width, height;

public:
    Box(double width, double height, double weight) : width(width), height(height), Object(weight)
    {
        printf("Box constructing...\n");
    }

    ~Box()
    {
        printf("Box destructing...\n");
    }

    double getWidth() const { return width; }
    void setWidth(double width) { this->width = width; }
    double getHeight() const { return height; }
    void setHeight(double height) { this->height = height; }
};

int main(int argc, char const *argv[])
{
    Box box(10, 20, 50);
    printf("Size = %.2f * %.2f, Weight = %.2f\n", box.getWidth(), box.getHeight(), box.getWeight());
    return 0;
}
