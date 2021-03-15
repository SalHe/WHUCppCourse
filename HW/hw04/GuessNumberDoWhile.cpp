#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    srand((unsigned int)time(nullptr));
    int number = rand() % 100 + 1;
    int userNumber;
    cout << "请输入你猜的数：" << endl;
    do
    {
        cin >> userNumber;
        if (userNumber > number)
            cout << "你猜大了哦~再试一遍" << endl;
        else if (userNumber < number)
            cout << "你猜小了哦~再试一遍" << endl;
        else
            break;
    } while (true);
    cout << "猜对了" << endl;

    return 0;
}
