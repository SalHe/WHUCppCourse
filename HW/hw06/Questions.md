### 4-1. 解释public和private的作用，公有类型成员与私有类型成员有哪些区别？

public和private是对类的成员变量/成员函数访问权限的修饰关键字。

以public关键字修饰的成员为公有成员，可以在任何地方访问，即类内部、外部、子类等都可以对成员进行访问。
以private关键字修饰的成员为私有成员，只能在类内部对成员进行访问。


### 4-2. protected关键字有何作用？

protected也是对类成员访问权限的修饰符。

表示成员只能从类内部及其子类访问。


### 4-3. 构造函数和析构函数有什么作用？

- 构造函数：用于类实例化时，完成一些初始化的操作。
- 析构函数：用于类实例被释放时，完成一些释放资源的操作。


### 4-5. 已知 `class A` 中有数据成员`int a`，如果定义了A的两个对象`a1`，`a2`，他们各自的数据可以不同吗？

可以不同。因为`a1`和`a2`是不同的实例，他们的成员变量占据不同的内存空间，可以有不同的数据。


### 4-8. 定义一个`Dog`类，包含了`age`，`weight`等属性，以及对这些属性操作的方法。实现并测试这个类。

```c++
#include <iostream>
#include <string>

using namespace std;

class Dog
{
private:
    int age;
    float weight;
    string name;

public:
    Dog();
    ~Dog();

    int getAge();
    void setAge(int age);

    float getWeight();
    void setWeight(float weight);

    string getName();
    void setName(string name);

    void selfIntro();
};

Dog::Dog()
{
}

Dog::~Dog()
{
}

int Dog::getAge()
{
    return age;
}

void Dog::setAge(int age)
{
    this->age = age;
}

float Dog::getWeight()
{
    return weight;
}

void Dog::setWeight(float weight)
{
    this->weight = weight;
}

string Dog::getName()
{
    return name;
}

void Dog::setName(string name)
{
    this->name = name;
}

void Dog::selfIntro()
{
    cout << "Hello, I'm a " << age << " year-old dog weighting " << weight << " Pounds." << endl;
}

int main(int argc, char const *argv[])
{
    Dog dog;
    dog.setAge(10);
    dog.setWeight(20.5);
    dog.setName("John");
    dog.selfIntro();
    return 0;
}

```

### 4-9. 设计并测试一个名为`Rectangle`的矩形类，其属性为矩形的左下角与右上角的两个点的坐标，根据坐标能计算矩形的面积。

```c++
#include <iostream>
#include <cmath>

using namespace std;

class Rectangle
{
private:
    float ax, ay;
    float bx, by;

public:
    Rectangle(float ax, float ay, float bx, float by) : ax(ax), ay(ay), bx(bx), by(by) {}
    ~Rectangle() {}

    float area() const { return abs((ax - bx) * (ay - by)); }
    void report() const
    {
        cout << "Rectangle(" << ax << ", " << ay << ")-(" << bx << ", " << by << ")"
             << " => Area: " << area() << endl;
    }
};

int main(int argc, char const *argv[])
{
    Rectangle r1(0, 0, 10, 10);
    Rectangle r2(20, 20, 10, 10);
    r1.report();
    r2.report();
    return 0;
}

```

### 4-10. 设计一个用于人事管理的“人员”类。由于考虑到通用性，这里只抽象出所有类型人员都具有的属性：编号、性别、出生日期、身份证号等。其中“出生日期”声明为一个“日期”类内嵌子对象。用成员函数实现对人员信息的录入和显示。要求包括：构造函数和析构函数、复制构造函数、内联成员函数、带默认形参值的成员函数、类的组合。

```c++
#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    enum Gender {
        Male, Female
    };

    class Date {
        int year, month, day;

    public:
        Date(int year = 2021, int month = 3, int day = 29) : year(year), month(month), day(day) {}
        Date(Date & date){
            this->year = date.year;
            this->month = date.month;
            this->day = date.day;
        }
        ~Date() {}

        int getYear() const {
            return year;
        }

        void setYear(int year) {
            Date::year = year;
        }

        int getMonth() const {
            return month;
        }

        void setMonth(int month) {
            Date::month = month;
        }

        int getDay() const {
            return day;
        }

        void setDay(int day) {
            Date::day = day;
        }

    };

private:
    int id;
    Gender gender;
    Date birthDate;
    string idCardNumber;

public:

    Person() {}
    Person(Person &p){
        this->id = p.id;
        this->gender = p.gender;
        this->birthDate = p.birthDate;
        this->idCardNumber = p.idCardNumber;
    }
    ~Person() {}

    int getId() const {
        return id;
    }

    void setId(int id) {
        Person::id = id;
    }

    Gender getGender() const {
        return gender;
    }

    void setGender(Gender gender) {
        Person::gender = gender;
    }

    const Date &getBirthDate() const {
        return birthDate;
    }

    void setBirthDate(const Date &birthDate) {
        Person::birthDate = birthDate;
    }

    const string &getIdCardNumber() const {
        return idCardNumber;
    }

    void setIdCardNumber(const string &idCardNumber) {
        Person::idCardNumber = idCardNumber;
    }


};
```

### 4-20. 定义一个复数类`Complex`，使得下面的代码能够工作。

```c++
Complex c1(3, 5);       // 用复数3+5i初始化c1
Complex c2 = 4.5;       // 用实数4.5初始化c2
c1.add(c2);             // 将c1与c2相加，结果保存在c1中
c1.show();              // 将c1输出（这时的结果应该是7.5+5i）

```

```c++
#include <iostream>

using namespace std;

class Complex
{
private:
    double real, image;

public:
    Complex(double real, double image = 0) : real(real), image(image) {}
    ~Complex() {}

    void add(Complex c)
    {
        real += c.real;
        image += c.image;
    }

    void show()
    {
        cout << real << "+" << image << "i" << endl;
    }
};
```