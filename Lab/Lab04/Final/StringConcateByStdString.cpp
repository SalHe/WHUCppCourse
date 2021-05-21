#include <iostream>
#include <string>
using namespace std;

string concate(string s1, string s2)
{
    return s1 + s2;
}

int main(int argc, char const *argv[])
{
    string s1("Hello");
    string s2("World");
    cout << concate(s1, s2) << endl;
    return 0;
}
