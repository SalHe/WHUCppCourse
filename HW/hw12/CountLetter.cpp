#include <iostream>
#include <string>
using namespace std;

int count(const char *s)
{
    char *p = (char *)s;
    int cnt = 0;
    while (*p)
    {
        if(((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z'))) cnt ++;
        p++;
    }
    return cnt;
}

int main(int argc, char const *argv[])
{
    string str;
    cin >> str;
    cout << count(str.c_str()) << endl;
    return 0;
}
