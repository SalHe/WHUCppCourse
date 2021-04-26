#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double raw = 0.0;
    double *pRaw = &raw;

    cout << "Size of double: " << sizeof(raw) << endl;
    cout << "Size of pointer of double: " << sizeof(pRaw) << endl;

    return 0;
}
