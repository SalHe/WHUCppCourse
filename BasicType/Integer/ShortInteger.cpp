#include <iostream>
using namespace std;

int main()
{
    short int i;
    unsigned short int j;
    j = 50000;  // 0xC350 = 1100001101010000b
    i = j;
    cout << "Short int is :" << i << endl;
    cout << "Short unsigned int is : " << j << endl;
    return 0;
}