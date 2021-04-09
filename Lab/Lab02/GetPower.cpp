#include <iostream>

using namespace std;

// 重点是考察重载，所以暂不考虑算法

int getPower(int x, int y)
{
    int ans = 1;
    for (int i = 0; i < y; i++)
    {
        ans *= x;
    }
    return ans;
}

double getPower(double x, int y)
{
    double ans = 1;
    for (int i = 0; i < y; i++)
    {
        ans *= x;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int a;
    float b;

    cout << "请输入整数a：";
    cin >> a;

    cout << "请输入小数(实数)b：";
    cin >> b;

    int m;
    cout << "请输入指数m：";
    cin >> m;

    cout << endl
         << endl;
    cout << "a^m = " << getPower(a, m) << endl;
    cout << "b^m = " << getPower(b, m) << endl;

    return 0;
}
