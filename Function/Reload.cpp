// 参数类型不同的函数重载
#include <iostream>

using namespace std;
int Abs(int x) //形参为整型
{
    return x > 0 ? x : -x;
}
double Abs(double x) //形参为双精度型
{
    return x > 0 ? x : -x;
}
long Abs(long x) //形参为长整型
{
    return x > 0 ? x : -x;
}
int main()
{
    int x1 = 4;
    double x2 = 5.5;
    long x3 = 6L;
    cout << "|x1|=" << Abs(x1) << endl;
    cout << "|x2|=" << Abs(x2) << endl;
    cout << "|x3|=" << Abs(x3) << endl;
    return 0;
}