### 8-5. 编写一个哺乳动物类Mammal,再由此派生出狗类Dog,二者都声明speak()成员函数,该函数在基类中被声明为虚函数。声明一个Dog类的对象,通过此对象调用speak 函数,观察运行结果。

```c++
#include <stdio.h>

class Mammal
{
public:
    virtual void speak()
    {
        printf("Mammal speaks...\n");
    }
};

class Dog : public Mammal
{

public:
    virtual void speak()
    {
        printf("Dog speaks...\n");
    }
};

int main(int argc, char const *argv[])
{
    Dog dog;
    dog.speak();    
    return 0;
}
```

输出结果：
```
Dog speaks...
```


### 8-6. 请编写一个抽象类Shape,在此基础上派生出类 Rectangle和Circle,二者都有计算对象面积的函数getArea() 、计算对象周长的函数getPerim()。

```c++
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

```


### 8-7. 对类Point重载“++”(白增)、“--”(自减)运算符,要求同时重载前缀和后缀的形式。

```c++
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

```

### 8-8. 定义一个基类BaseClass，从它派生出类DerivedClass。BaseClass有成员函数fn1() ,fn2() , fn1()是虚函数;DerivedClass也有成员函数fnl(),fn2()。在主函数中声明一个DerivedClass的对象,分别用 BaseClass和 DerivedClass 的指针指向DerivedClass 的对象,并通过指针调用fnl( ),fn2(),观察运行结果。

```c++

#include <stdio.h>

class BaseClass
{
public:
    virtual void fn1() { printf("BaseClass fn1\n"); }
    void fn2() { printf("BaseClass fn2\n"); }
};

class DerivedClass : public BaseClass
{
public:
    virtual void fn1() { printf("DerivedClass fn1\n"); }
    void fn2() { printf("DerivedClass fn2\n"); }
};

int main(int argc, char const *argv[])
{
    DerivedClass instance;

    printf("DerivedClass * : \n");
    DerivedClass * pDerivedClass = &instance;
    pDerivedClass->fn1();
    pDerivedClass->fn2();

    printf("BaseClass * : \n");
    BaseClass * pBaseClass = &instance;
    pBaseClass->fn1();
    pBaseClass->fn2();

    return 0;
}

```

输出结果：
```
DerivedClass * : 
DerivedClass fn1
DerivedClass fn2
BaseClass * : 
DerivedClass fn1
BaseClass fn2
```

### 8-10. 编写程序定义类Point,有数据成员x,y.为其定义友元函数实现重载“+”。

```c++
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

```