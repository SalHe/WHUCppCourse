#include <iostream>

using namespace std;

class ctype
{
private:
    int a;
    static int s; //定义私有的静态数据成员s
public:
    void print();
    ctype(int x = 0);
};

void ::ctype::print()
{
    cout << "a=" << ++a << endl;
    cout << "s=" << ++s << endl;
}

::ctype::ctype(int x)
{
    a = x;
}

int ::ctype::s = 0;

int main()
{
    ::ctype c1, c2, c3;
    c1.print();
    c2.print();
    c3.print();
    return 0;
}
