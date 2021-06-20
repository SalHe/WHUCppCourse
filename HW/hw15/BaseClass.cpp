
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
