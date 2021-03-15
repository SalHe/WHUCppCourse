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
            cout << "数据已经增加" << endl;
        else if (opt == 'D')
            cout << "数据已经删除" << endl;
        else if (opt == 'S')
            cout << "数据已经排序" << endl;
        else if (opt == 'Q')
            return 0;
    }

    return 0;
}
