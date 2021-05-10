### 6-8. 声明一个int型指针,用new语句为其分配包含10个元素的地址空间。

```c++
int * ints = new int[10];
```

### 6-15. const int * p1和int * const p2的区别是什么?

const int * 代表指向常量的指针：其指向的内容不可被更改，而指针值本身可以被修改。

```c++
int i = 10;
int j = 20;
const int * ptr = &i;

*ptr = 1; // 这句代码是错误的，因为ptr指向一个常量
ptr = &j; // 可以通过
```

而int * const 代表指针本身是一个常量：指针值不可以被修改，但是指向的内容可以被修改。

```c++
int i = 10;
int j = 20;
int * const ptr = &i;

*ptr = 1; // 可以通过
ptr = &j; // 这句代码是错误的，因为ptr是一个常量
```

### 6-17. 下列程序有何问题,请仔细体会使用指针时应如何避免出现这个问题。

```c++
#include <iostream>
using namespace std;

int main () {
    int * p;
    *p = 9;
    cout << "The value at p: " << * p;
    return 0;
}
```

这段代码中，指针p未被赋予初值，无法知道p具体指向哪里，所以对其指向地址处内容会产生无法预测的行为。

在使用指针时，应明确指针到底指向何处。


### 6-18. 下列程序有何问题,请改正;仔细体会使用指针时应如何避免出现这样的问题。

```c++
#include <iostream>
using namespace std;

int fn1()
{
    int *p = new int(5);
    return *p;
}

int main()
{
    int a = fn1();
    cout << "the value of a is: " << a;
    return 0;
}
```

fn1中new了一个int数据，并赋初值，存放到内存中。并把内存地址给了p，最终返回*p也就是p指向地址处的内容，就是5。但是这块内存地址空间没有使用delete释放，造成内存泄露。

### 6-20. 实现一个名为SimpleCircle的简单圆类。其数据成员int * itsRadius为一个指向其半径值的指针,存放其半径值。设计对数据成员的各种操作,给出这个类的完整实现并测试这个类。

```c++
#include <iostream>
using namespace std;

class SimpleCircle
{
private:
    int *itsRadius;

public:
    SimpleCircle(int radius)
    {
        this->itsRadius = new int(radius);
    }
    ~SimpleCircle()
    {
        delete itsRadius;
    }

    int getRadius() const { return *itsRadius; }
    void setRadius(int radius) { *itsRadius = radius; }
};

int main(int argc, char const *argv[])
{
    SimpleCircle circle(10);
    cout << "R = " << circle.getRadius() << endl;
    circle.setRadius(20);
    cout << "R = " << circle.getRadius() << endl;
    return 0;
}

```

### 6-21. 编写一个函数﹐统计一条英文句子中字母的个数﹐在主程序中实现输人输出。

```c++
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

```

### 6-22. 编写函数void reverse(string &s),用递归算法使字符串s倒序。

```c++
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

```