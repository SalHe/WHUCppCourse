#include <iostream>

using namespace std;

float F2C(int f)
{
    return 5 / 9.0 * (f - 32);
}

int main(int argc, char const *argv[])
{

    cout << "������һ���¶�(���϶�)��" << endl;

    float f;
    cin >> f;

    cout << "���Ӧ�����϶�Ϊ��" << F2C(f) << endl;

    return 0;
}
