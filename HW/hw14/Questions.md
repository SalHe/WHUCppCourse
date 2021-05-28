### 7-3. 如果派生类B已经重载了基类A的一个成员函数fn1(),没有重载基类的成员函数fn2(),如何在派生类的函数中调用基类的成员函数fn1( ), fn2()?

```c++
A::fn1();

fn2();  // 或者A::fn2();
```
 
### 7-5. 定义一个基类Shape,在此基础上派生出 Rectangle和Circle,二者都有getArea()函数计算对象的面积。使用Rectangle类创建一个派生类Square。

```c++
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
```


### 7-8. 7-8定义一个Document类,有数据成员name,从Document派生出Book类,增加数据成员pageCount。

```c++
class Document
{
protected:
    char *name;

public:
    Document(/* args */) {}
    ~Document() {}
};

class Book : public Document
{
protected:
    int pageCount;
};
```

### 7-10. 定义一个object类,有数据成员weight 及相应的操作函数﹐由此派生出Box类,增加数据成员height和 width 及相应的操作函数,声明一个Box对象﹐观察构造函数与析构函数的调用顺序。

```c++
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

```

输出结果：

```
Object constructing...
Box constructing...
Size = 10.00 * 20.00, Weight = 50.00
Box destructing...
Object destructing...
```

结论：

Box构造 → Object构造 → Object析构 → Box析构


### 7-11. 定义一个基类BaseClass，从它派生出类 DerivedClass。BaseClass有成员函数fni() ,fn2() , DerivedClass也有成员函数fnl ( ) , fn2()。在主函数中声明一个DerivedClass的对象﹐分别用DerivedClass的对象以及BaseClass和 DerivedClass的指针来调用fn1(),fn2(),观察运行结果。

```c++
//定义一个基类BaseClass，从它派生出类 DerivedClass。BaseClass有成员函数fni() ,fn2() , DerivedClass也有成员函数fnl ( ) , fn2()。在主函数中声明一个DerivedClass的对象﹐分别用DerivedClass的对象以及BaseClass和 DerivedClass的指针来调用fn1(),fn2(),观察运行结果。

#include <stdio.h>

class BaseClass
{
public:
    void fn1() { printf("BaseClass fn1\n"); }
    void fn2() { printf("BaseClass fn2\n"); }
};

class DerivedClass : public BaseClass
{
public:
    void fn1() { printf("DerivedClass fn1\n"); }
    void fn2() { printf("DerivedClass fn2\n"); }
};

int main(int argc, char const *argv[])
{
    DerivedClass instance;
    instance.fn1();
    instance.fn2();

    BaseClass * pBaseClass = &instance;
    pBaseClass->fn1();
    pBaseClass->fn2();

    return 0;
}

```

输出结果：

```
DerivedClass fn1
DerivedClass fn2
BaseClass fn1
BaseClass fn2
```

结论：

使用BaseClass的指针对对象进行方法调用会执行BaseClass中的方法，而使用DerivedClass会执行DerivedClass中的方法。