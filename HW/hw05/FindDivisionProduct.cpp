#include <iostream>

using namespace std;

unsigned int maxCommonDivisor(unsigned int a, unsigned int b)
{
    unsigned int c = b;
    while (a % b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return c;
}

unsigned int minCommonMultiple(unsigned int n1, unsigned int n2)
{
    // ��ȡ������
    unsigned int max = (n1 > n2) ? n1 : n2;
 
    do
    {
        if (max % n1 == 0 && max % n2 == 0)
            break;
        else
            ++max;
    } while (true);
    return max;
}

int main(int argc, char const *argv[])
{
    unsigned int X, Y;
    cout << "������ X: ";
    cin >> X;
    cout << "������ Y: ";
    cin >> Y;

    cout << "��С��������" << minCommonMultiple(X, Y) << endl;
    cout << "���������" << maxCommonDivisor(X, Y) << endl;

    return 0;
}
