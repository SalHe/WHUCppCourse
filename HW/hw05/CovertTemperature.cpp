#include <iostream>

using namespace std;

float F2C(int f)
{
    return 5 / 9.0 * (f - 32);
}

int main(int argc, char const *argv[])
{

    cout << "请输入一个温度(华氏度)：" << endl;

    float f;
    cin >> f;

    cout << "其对应的摄氏度为：" << F2C(f) << endl;

    return 0;
}
