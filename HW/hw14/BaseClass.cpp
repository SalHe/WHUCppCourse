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
