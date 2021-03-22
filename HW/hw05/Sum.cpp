#include <iostream>

using namespace std;

int sum(int n)
{
    if (n <= 0)
        return 0;

    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}

int main(int argc, char const *argv[])
{

    cout << "请输入一个整数：" << endl;

    int num;
    cin >> num;

    cout << "1 + 2 + 3 + ... + n = " << sum(num) << endl;

    return 0;
}
