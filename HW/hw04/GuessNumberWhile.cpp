#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    srand((unsigned int)time(nullptr));
    int number = rand() % 100 + 1;
    int userNumber;
    cout << "��������µ�����" << endl;
    cin >> userNumber;
    while (userNumber != number)
    {
        if (userNumber > number)
            cout << "��´���Ŷ~����һ��" << endl;
        else
            cout << "���С��Ŷ~����һ��" << endl;
        cin >> userNumber;
    }
    cout << "�¶���" << endl;

    return 0;
}
