// 派⽣类构造函数举例（多继承，含有内嵌对象） 。
#include <iostream>
using namespace std;
class B1
{ //基类B1，构造函数有参数
public:
    B1(int i) { cout << "constructing B1 " << i << endl; }
};
class B2
{ //基类B2，构造函数有参数
public:
    B2(int j)
    {
        cout << "constructing B2 " << j << endl;
    }
};
class B3
{ //基类B3，构造函数⽆参数
public:
    B3() { cout << "constructing B3 *" << endl; }
};
class C : public B2, public B1, public B3
{
public: //派⽣类的公有成员
    //注意基类名的个数与顺序
    //注意成员对象名的个数与顺序
    C(int a, int b, int c, int d) : B1(a), memberB2(d), memberB1(c), B2(b) {}

private: //派⽣类的私有对象成员
    B1 memberB1;
    B2 memberB2;
    B3 memberB3;
};
int main()
{
    C obj(1, 2, 3, 4);
    cin.ignore();
    return 0;
}