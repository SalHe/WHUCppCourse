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
    int i = 1;
    do
    {
        cout << i << (isPrime(i) ? "是" : "不是") << "素数"<< endl;
    } while ((++i) <= 100);

    return 0;
}
