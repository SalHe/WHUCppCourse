#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num)
{
    if (num <= 3)
        return true;
    for (int i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return false;
    return true;
}

int main(int argc, char const *argv[])
{

    cout << "请输入一个整数：" << endl;

    int num;
    cin >> num;

    cout << num << (isPrime(num) ? "是" : "不是") << "质数" << endl;

    return 0;
}
