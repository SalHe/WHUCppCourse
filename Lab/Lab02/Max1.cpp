#include <iostream>

using namespace std;

#define MAX(x, y) (x > y ? x : y)

int Max1(int x, int y)
{
    return MAX(x, y);
}

int Max1(int x, int y, int z)
{
    return Max1(Max1(x, y), z);
}

double Max1(double x, double y)
{
    return MAX(x, y);
}

double Max1(double x, double y, double z)
{
    return Max1(Max1(x, y), z);
}

int main(int argc, char const *argv[])
{
    int i1, i2, i3;
    cout << "请输入3个整数:";
    cin >> i1 >> i2 >> i3;
    cout << "他们之间的最大值为：" << Max1(i1, i2, i3) << endl;

    double d1, d2, d3;
    cout << "请输入3个实数:";
    cin >> d1 >> d2 >> d3;
    cout << "他们之间的最大值为：" << Max1(d1, d2, d3) << endl;

    return 0;
}
