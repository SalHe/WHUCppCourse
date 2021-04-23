#include <iostream>
using namespace std;
class ctype
{
private:
    int a;
    static int s; //定义私有的静态数据成员s
public:
    static void print();
    ctype();
};
// void ctype::print()
void ::ctype::print()
{
    // cout << "a=" << ++a << endl;
    cout << "s=" << ++s << endl; //正确
}
// ctype::ctype()
::ctype::ctype()
{
    a = 0;
    s++;
    cout << "a=" << ++a << endl;
}
// int ctype::s = 0;
int ::ctype::s = 0;
int main()
{
    // ctype::print();
    ::ctype::print();
    //未定义对象时，直接通过类名调用静态成员函数
    // ctype c1, c2;
    ::ctype c1, c2;
    c1.print(); //可以用对象调用静态成员函数
    c2.print();
    // ctype c3;
    ::ctype c3;
    c3.print();
    return 0;
}
