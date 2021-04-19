### 5-1. 什么叫作用域？有哪几种类型的作用域？

作用域是指标识符的有效范围。
类型：
1. 函数原型作用域
2. 局部作用域
3. 类作用域
4. 命名空间作用域

### 5-2. 什么叫做可见性？可见性的一般规则是什么？

可见性是指标识符是否可被引用。
一般规则：
1. 标识符声明在前，引用在后。
2. 在同一作用域内，不能声明同名的标识符。
3. 在没有互相包含关系的不同的作用域中声明的同名标识符，互不影响。
4. 如果在两个或多个具有包含关系的作用域中声明了同名标识符，则外层标识符在内层不可见。


### 5-3. 下面程序的运行结果是什么？实际运行一下，看看与你的设想有何不同？

```c++
#include <iostream>
using namespace std;
int x = 5, y = 7;
void myFunction()
{
    int y = 10;
    cout << "x from myFunction: " << x << "\n";
    cout << "y from myFunction: " << y << "\n\n";
}
int main()
{
    cout << "x from main: " << x << "\n";
    cout << "y from main: " << y << "\n\n";
    myFunction();
    cout << "Back frorn myFunction! \n\n";
    cout << "x from main: " << x << "\n";
    cout << "y from main: " << y << "\n";
    return 0;
}

```

预期输出结果:
> 首先会提示来自main的x,y分别是5,7。
> 然后提示来自myFunction的x,y分别是5,10
> 接着提示从myFunction返回了
> 最后提示来自main的x,y分别是5,7

有何不同：
无


### 5-7. 定义一个Cat类，拥有静态数据成员numOfCats，记录Cat的个体数目；静态成员函数getNumOfCats()，读取numOfCats。设计程序测试这个类，一会静态数据成员和静态成员函数的用法。

```c++
#include <iostream>
using namespace std;

class Cat
{
    static int numOfCats;

public:
    static int addCats(int count)
    {
        numOfCats += count;
    }

    static int getNumOfCats()
    {
        return numOfCats;
    }
};

int Cat::numOfCats = 0;

int main(int argc, char const *argv[])
{
    cout << "NumOfCats = " << Cat::getNumOfCats() << endl;
    Cat::addCats(5);
    cout << "NumOfCats = " << Cat::getNumOfCats() << endl;
    return 0;
}

```


### 5-9. 如果类A是类B的友元，类B是类C的友元，类D是类A的派生类，那么类B是类A的友元吗？类C是类A的友元吗？类D是类B的友元吗？

- 类B是类A的友元吗？不是
- 类C是类A的友元吗？不是
- 类D是类B的友元吗？不是

### 5-12. 在函数fn1中定义一个静态变量n，fn1中对n的值加1，在主函数中，调用fn1十次，显示n的值。

```c++
#include <iostream>
using namespace std;

/**
 * @brief 展示静态局部变量的值或者让其自增1
 * 
 * @param show 展示模式。为true时仅展示n的值，为false时仅对n自增1。
 */
void fn1(bool show = false)
{
    static int n = 0;
    if (show)
        cout << "n = " << n << endl;
    else
        n++;
}

int main(int argc, char const *argv[])
{

    cout << "At the beginning: " << endl;
    fn1(true);

    for (int i = 0; i < 10; i++)
        fn1();

    cout << "After n++ 10 times: " << endl;
    fn1(true);

    return 0;
}

```

### 5-13. 定义类X,Y,Z,函数h(X*),满足:类X有私有成员i,Y的成员函数g(X*)是X的友元函数﹐实现对X的成员i加1;类Z是类X的友元类,其成员函数f(X*)实现对X的成员i加5;函数h(X*)是X的友元函数,实现对X的成员i加10。在一个文件中定义和实现类,在另一个文件中实现main()函数。

- 5-13.h
```c++
#ifndef _5_13_h_
#define _5_13_h_

class X;

class Y
{
public:
    void g(X *x);
};

class X
{
    int i;

    friend void Y::g(X *x);
    friend void h(X *x);
    friend class Z;
};

class Z
{
public:
    void f(X *x)
    {
        x->i += 5;
    }
};

void Y::g(X *x)
{
    x->i++;
}

void h(X *x)
{
    x->i += 10;
}

#endif
```

- 5-13.cpp
```c++
#include "5-13.h"

int main(int argc, char const *argv[])
{
    X x;
    Y y;
    Z z;
    y.g(&x);
    z.f(&x);
    return 0;
}
```
