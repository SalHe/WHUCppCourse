#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "现在正在下雨吗?" << endl;

    char sel;
    cin >> sel;

    if (sel == 'Y' || sel == 'y')
        cout << "现在正在下雨。" << endl;
    else if (sel == 'N' || sel == 'n')
        cout << "现在没有下雨。" << endl;
    else
        cout << "请输入Y/N" << endl;

    return 0;
}
