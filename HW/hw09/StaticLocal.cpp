#include <iostream>
using namespace std;

/**
 * @brief 展示静态局部变量的值或者让其自增1
 * 
 * @param show 展示模式。为true时仅展示n的值，为false时仅对n自增1。
 */
void fn1(bool show = false)
{
    static int n = 0;
    if (show)
        cout << "n = " << n << endl;
    else
        n++;
}

int main(int argc, char const *argv[])
{

    cout << "At the beginning: " << endl;
    fn1(true);

    for (int i = 0; i < 10; i++)
        fn1();

    cout << "After n++ 10 times: " << endl;
    fn1(true);

    return 0;
}
