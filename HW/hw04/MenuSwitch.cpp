#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Menu: A(dd) D(elete) S(ort) Q(uit), Select one: " << endl;

    while (true)
    {
        char opt;
        cin >> opt;
        switch (opt)
        {
        case 'A':
            cout << "�����Ѿ�����" << endl;
            break;
        case 'D':
            cout << "�����Ѿ�ɾ��" << endl;
            break;
        case 'S':
            cout << "�����Ѿ�����" << endl;
            break;
        case 'Q':
            return 0;
            // break;
        }
    }

    return 0;
}
