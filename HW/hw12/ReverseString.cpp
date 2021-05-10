#include <iostream>
#include <string>
using namespace std;

void reverse(string &s)
{
    static string copy_str = string(s.length(), '\0');
    static int index;
 
    if (index == s.length())
    {
        s = string(copy_str);
        return;
    }
     
    copy_str[index] = s[s.length()-index-1];
    index++;
     
    reverse(s);
}

int main(int argc, char const *argv[])
{
    string str;
    cin >> str;
    reverse(str);
    cout << str << endl;
    return 0;
}
