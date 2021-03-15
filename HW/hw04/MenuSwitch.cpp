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
            cout << "数据已经增加" << endl;
            break;
        case 'D':
            cout << "数据已经删除" << endl;
            break;
        case 'S':
            cout << "数据已经排序" << endl;
            break;
        case 'Q':
            return 0;
            // break;
        }
    }

    return 0;
}
