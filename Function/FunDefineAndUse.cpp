#include <iostream>
using namespace std;
int fact(int);

int main()
{
    int j = fact(5); //j等于120 ，也就是5的阶乘
    cout << "5 !is " << j << endl;
    return 0;
}

int fact(int val)
{
    int rec = 1;
    while (val > 1)
        rec *= val--;
    return rec;
}