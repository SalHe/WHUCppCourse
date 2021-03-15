### 2-23. 写出下列表达式的值：

| 表达式                     | 值    |
| -------                   | ----- |
| 2 < 3 && 6 < 9            | true  |
| !(4 < 7)                  | false |
| !(3 > 5) \|\| (6 < 2)     | true  |


### 2-24. 若 a = 1, b = 2, c = 3, 下列各式的结果是什么？

| 表达式              | 值    |
| -------             | ----- |
| a \| b - c          | -1    |
| a ^ b & -c          | 1     |
| a & b \| c          | 3     |
| a \| b & c          | 3     |


### 2-25. 若 a = 1，下列各式的结果是多少？

| 表达式              | 值    |
| -------             | ----- |
| !a \| a             | 1     |
| ~a \| a             | -1    |
| a^a                 | 0     |
| a >> 2              | 0     |

### 2-26. 编写一个完整的程序,实现功能:向用户提问“现在正在下雨吗?”,提示用户输入Y或N。若输入为Y,显示“现在正在下雨。”﹔若输人为N,显示“现在没有下雨。”;否则继续提问“现在正在下雨吗?”。

```c++

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "现在正在下雨吗?" << endl;

    char sel;
    cin >> sel;

    if (sel == 'Y' || sel == 'y')
        cout << "现在正在下雨。" << endl;
    else if (sel == 'N' || sel == 'n')
        cout << "现在没有下雨。" << endl;
    else
        cout << "请输入Y/N" << endl;

    return 0;
}

```


### 2-28. 实现一个简单的菜单程序,运行时显示“Menu: A(dd) D(elete) S(ort) Q(uit), Select one:”提示用户输入。A表示增加,D表示删除,S表示排序,Q表示退出。输入为A、D、S时分别提示“数据已经增加、删除﹑排序。”,输入为Q时程序结束。

1. 要求使用if…else语句进行判断,用break,continue控制程序流程。

```c++
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Menu: A(dd) D(elete) S(ort) Q(uit), Select one: " << endl;

    while (true)
    {
        char opt;
        cin >> opt;
        if (opt == 'A')
            cout << "数据已经增加" << endl;
        else if (opt == 'D')
            cout << "数据已经删除" << endl;
        else if (opt == 'S')
            cout << "数据已经排序" << endl;
        else if (opt == 'Q')
            return 0;
    }

    return 0;
}

```

2. 要求使用switch语句。

```c++
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Menu: A(dd) D(elete) S(ort) Q(uit), Select one: " << endl;

    while (true)
    {
        char opt;
        cin >> opt;
        switch (opt)
        {
        case 'A':
            cout << "数据已经增加" << endl;
            break;
        case 'D':
            cout << "数据已经删除" << endl;
            break;
        case 'S':
            cout << "数据已经排序" << endl;
            break;
        case 'Q':
            return 0;
            // break;
        }
    }

    return 0;
}

```

### 2-29. 用穷举法找出1～100间的质数并显示出来。分别使用while, do… while, for循环语句实现。

- for 循环

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
    for (int i = 1; i <= 100; i++)
        cout << i << (isPrime(i) ? "是" : "不是") << "素数"<< endl;

    return 0;
}

```

- while 循环

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
    int i = 1;
    while (i <= 100)
    {
        cout << i << (isPrime(i) ? "是" : "不是") << "素数"<< endl;
        i++;
    }
    
    return 0;
}

```

- do...while 循环

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
    int i = 1;
    do
    {
        cout << i << (isPrime(i) ? "是" : "不是") << "素数"<< endl;
    } while ((++i) <= 100);

    return 0;
}

```



### 2-33. 在程序中定义一个整型变量,赋予1～100的值。要求用户猜这个数﹐比较两个数的大小,把结果提示给用户,直到猜对为止。分别使用while, do…- while语句实现循环。

- while

```c++
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    srand((unsigned int)time(nullptr));
    int number = rand() % 100 + 1;
    int userNumber;
    cout << "请输入你猜的数：" << endl;
    cin >> userNumber;
    while (userNumber != number)
    {
        if (userNumber > number)
            cout << "你猜大了哦~再试一遍" << endl;
        else
            cout << "你猜小了哦~再试一遍" << endl;
        cin >> userNumber;
    }
    cout << "猜对了" << endl;

    return 0;
}

```

- do...while

```c++
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    srand((unsigned int)time(nullptr));
    int number = rand() % 100 + 1;
    int userNumber;
    cout << "请输入你猜的数：" << endl;
    do
    {
        cin >> userNumber;
        if (userNumber > number)
            cout << "你猜大了哦~再试一遍" << endl;
        else if (userNumber < number)
            cout << "你猜小了哦~再试一遍" << endl;
        else
            break;
    } while (true);
    cout << "猜对了" << endl;

    return 0;
}

```

### 2-34. 声明枚举类型 Weekday,包括SUNDAY到SATURDAY七个元素在程序中声明weekday类型的变量,对其赋值,声明整型变量,看看能否对其赋Weekday类型的值。

答：可以对整型变量赋Weekday的值。

```c++
enum Weekday{
    Sunday = 7,
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main(int argc, char const *argv[])
{
    Weekday myFriday = Friday;
    int integer;
    integer = myFriday; 

    return 0;
}

```