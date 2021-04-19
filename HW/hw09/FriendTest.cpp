/*
### 5-9. 如果类A是类B的友元，类B是类C的友元，类D是类A的派生类，那么类B是类A的友元吗？类C是类A的友元吗？类D是类B的友元吗？
*/

class A;
class B;
class C;
class D;

class A
{
    int data;
    B b;

    int testB() { return b.data; }
};

class B
{
    int data;
    A a;

    friend class A;

    int testA() { return a.data; }
};

class C
{
    int data;
    A a;

    friend class B;

    int testA() { return a.data; }
};

class D : A
{
    B b;

    int testB() { return b.data; }
};
