### 6-1. 数组a[10][5][15]一共有多少个元素?

$10 \times 5 \times 15 = 750 $个

### 6-3. 用一条语句声明一个有5个元素的int型数组,并依次赋予1～5的初值。

```c++
int a[5] = {1, 2, 3, 4, 5};
```

### 6-4. 已知有一个数组名叫oneArray,用一条语句求出其元素的个数。

假设oneArray的元素类型为T，则目标语句可以写为
```c++
sizeof(oneArray) / sizeof(T)
```

### 6-5. 用一条语句声明一个有5×3个元素的二维int型数组,并依次赋予1～15的初值。

```c++
int b[5][3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
```

### 6-10. 声明一个有5个元素的int型数组,在程序中提示用户输入元素值,最后再在屏幕上显示出来。

```c++
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
```


### 6-14. 在程序中声明一个double类型变量的指针,分别显示指针占了多少字节和指针所指的变量占了多少字节。

```c++
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

```

本次测试结果：
```
Size of double: 8
Size of pointer of double: 8
```