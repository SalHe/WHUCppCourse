#include <iostream>

using namespace std;

int Fibonacci(int n)
{
    if (n <= 0)
        return 0;

    if (n <= 2)
        return 1;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(int argc, char const *argv[])
{

    cout << "请输入一个整数：" << endl;

    int num;
    cin >> num;

    cout << "Fibonacci(n) = " << Fibonacci(num) << endl;

    return 0;
}
