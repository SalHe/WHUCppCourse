#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Menu: A(dd) D(elete) S(ort) Q(uit), Select one: " << endl;

    while (true)
    {
        char opt;
        cin >> opt;
        if (opt == 'A')
            cout << "�����Ѿ�����" << endl;
        else if (opt == 'D')
            cout << "�����Ѿ�ɾ��" << endl;
        else if (opt == 'S')
            cout << "�����Ѿ�����" << endl;
        else if (opt == 'Q')
            return 0;
    }

    return 0;
}
