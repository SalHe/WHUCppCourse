#include <iostream>

using namespace std;

// 重点是考察重载，所以暂不考虑算法

int getPower(int x, int y)
{
    if (y == 0)
        return x == 1;
    if (y == 1)
        return x;
    if (y < 0)
        return 0;
    return getPower(x, y - 1) * x;
}

double getPower(double x, int y)
{
    if (y == 0)
        return x == 1;
    if (y == 1)
        return x;
    if (y < 0)
        return 1 / getPower(x, -y);
    return getPower(x, y - 1) * x;
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

    // 如果要让getPower(a, m)能调用getPower(double, double)
    // 只需将a转换为double即可
    getPower((double)a, m);

    return 0;
}
