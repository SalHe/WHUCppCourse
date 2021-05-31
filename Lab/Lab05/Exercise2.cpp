// 多继承⽅式下构造函数和析构函数的调用顺序。
#include <iostream>
using namespace std;
class A //定义基类A
{
public:
    A(int i)
    {
        a = i;
        cout << "A Constructor" << endl;
    }
    void disp() { cout << "a=" << a << endl; }
    ~A() { cout << "A Destructor" << endl; }

private:
    int a;
};
class B //定义基类B
{
public:
    B(int j)
    {
        b = j;
        cout << "B Constructor" << endl;
    }
    void disp() { cout << "b=" << b << endl; }
    ~B() { cout << "B Destructor" << endl; }

private:
    int b;
};
class C : public B, public A
{ //定义A和B的派⽣类C。B在前，A在后
public:
    C(int k) : A(k + 2), B(k - 2)
    { //包含基类成员初始化列表
        c = k;
        cout << "C Constructor" << endl;
    }
    void disp()
    { //用类名加作用域运算符限定调用某个基类的同名成员
        A::disp();
        B::disp();
        cout << "c=" << c << endl;
    }
    ~C() { cout << "C Destructor" << endl; }

private:
    int c;
};
int main()
{
    C obj(10);
    //调用类C的成员函数disp
    obj.disp();
    cin.ignore();
    return 0;
}