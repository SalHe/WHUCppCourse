#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "��������������?" << endl;

    char sel;
    cin >> sel;

    if (sel == 'Y' || sel == 'y')
        cout << "�����������ꡣ" << endl;
    else if (sel == 'N' || sel == 'n')
        cout << "����û�����ꡣ" << endl;
    else
        cout << "������Y/N" << endl;

    return 0;
}
