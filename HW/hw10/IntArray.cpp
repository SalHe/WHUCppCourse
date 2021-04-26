#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Please enter number " << i << ":" << endl;
        cin >> a[i];
    }

    cout << endl;
    cout << endl;
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "Number " << i << " = " << a[i] << endl;
    }

    return 0;
}
