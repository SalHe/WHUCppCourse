### 3-3. 比较值传递和引用传递的相同点与不同点。

值传递：是指当发生函数调用时，给形参分配内存空间，并用实参来**初始化**形参，形参是实参的一个副本，修改形参不影响实参的值。

引用传递：是指将实参作为引用传递给形参，形参可以影响实参变量的值。

两者都可以获得实参的值（当实参为值类型时）。


### 3-8. 编写函数把华氏温度转换为摄氏温度，公式如下，在主程序中提示用户输入一个华氏温度，转换后输出相应的摄氏温度。

$$ C = \frac{5}{9} (F - 32) $$

```c++
#include <iostream>

using namespace std;

float F2C(int f)
{
    return 5 / 9.0 * (f - 32);
}

int main(int argc, char const *argv[])
{

    cout << "请输入一个温度(华氏度)：" << endl;

    float f;
    cin >> f;

    cout << "其对应的摄氏度为：" << F2C(f) << endl;

    return 0;
}

```


### 3-9. 编写函数判别一个数是否是指数，在主程序中实现输入输出。

```c++
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

    cout << "请输入一个整数：" << endl;

    int num;
    cin >> num;

    cout << num << (isPrime(num) ? "是" : "不是") << "质数" << endl;

    return 0;
}

```


### 3-10. 编写函数求两个整数的最大公约数和最小公倍数。

```c++
#include <iostream>

using namespace std;

unsigned int maxCommonDivisor(unsigned int a, unsigned int b)
{
    unsigned int c = b;
    while (a % b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return c;
}

unsigned int minCommonMultiple(unsigned int n1, unsigned int n2)
{
    // 获取最大的数
    unsigned int max = (n1 > n2) ? n1 : n2;
 
    do
    {
        if (max % n1 == 0 && max % n2 == 0)
            break;
        else
            ++max;
    } while (true);
    return max;
}

int main(int argc, char const *argv[])
{
    unsigned int X, Y;
    cout << "请输入 X: ";
    cin >> X;
    cout << "请输入 Y: ";
    cin >> Y;

    cout << "最小公倍数：" << minCommonMultiple(X, Y) << endl;
    cout << "最大公因数：" << maxCommonDivisor(X, Y) << endl;

    return 0;
}

```

### 3-12. 在主程序中提示输入整数n，编写函数用递归的方法求1+2+...+n的值。

```c++
#include <iostream>

using namespace std;

int sum(int n)
{
    if (n <= 0)
        return 0;

    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}

int main(int argc, char const *argv[])
{

    cout << "请输入一个整数：" << endl;

    int num;
    cin >> num;

    cout << "1 + 2 + 3 + ... + n = " << sum(num) << endl;

    return 0;
}

```

### 3-13. 用递归的方法编写函数求Fibonacci级数，公式如下，观察递归调用的过程。

$$ F_n = F_{n-1} + F_{n-2} (n>2) $$

$$ F_1 = F_2 = 1 $$

```c++
#include <iostream>

using namespace std;

int Fibonacci(int n)
{
    if (n <= 0)
        return 0;

    if (n <= 2)
        return 1;
    else
        return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main(int argc, char const *argv[])
{

    cout << "请输入一个整数：" << endl;

    int num;
    cin >> num;

    cout << "Fibonacci(n) = " << Fibonacci(num) << endl;

    return 0;
}

```