#include <iostream>
using namespace std;

int strlen(const char *s)
{
    int c = 0;
    while (*s != '\0')
    {
        s++; c++;
    }
    return c;
}

char *concate(const char *s1, const char *s2)
{
    int len = strlen(s1) + strlen(s2);
    char * s = new char[len + 1];
    while (*s1 != '\0')
        *(s++) = *(s1++);
    while (*s2 != '\0')
        *(s++) = *(s2++);
    *s = '\0';
    return s - len;
}

int main(int argc, char const *argv[])
{
    const char * s1 = "Hello";
    const char * s2 = "World";
    cout << concate(s1, s2) << endl;
    return 0;
}
