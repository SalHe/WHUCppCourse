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
    for (int i = 1; i <= 100; i++)
        cout << i << (isPrime(i) ? "是" : "不是") << "素数"<< endl;

    return 0;
}
