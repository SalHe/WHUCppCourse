#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    srand((unsigned int)time(nullptr));
    int number = rand() % 100 + 1;
    int userNumber;
    cout << "��������µ�����" << endl;
    do
    {
        cin >> userNumber;
        if (userNumber > number)
            cout << "��´���Ŷ~����һ��" << endl;
        else if (userNumber < number)
            cout << "���С��Ŷ~����һ��" << endl;
        else
            break;
    } while (true);
    cout << "�¶���" << endl;

    return 0;
}
