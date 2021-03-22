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

    cout << "������һ��������" << endl;

    int num;
    cin >> num;

    cout << num << (isPrime(num) ? "��" : "����") << "����" << endl;

    return 0;
}
