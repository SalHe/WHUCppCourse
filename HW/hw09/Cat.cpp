#include <iostream>
using namespace std;

/*
定义一个Cat类，拥有静态数据成员numOfCats，记录Cat的个体数目；静态成员函数getNumOfCats()，读取numOfCats。设计程序测试这个类，一会静态数据成员和静态成员函数的用法。
*/

class Cat
{
    static int numOfCats;

public:
    static int addCats(int count)
    {
        numOfCats += count;
    }

    static int getNumOfCats()
    {
        return numOfCats;
    }
};

int Cat::numOfCats = 0;

int main(int argc, char const *argv[])
{
    cout << "NumOfCats = " << Cat::getNumOfCats() << endl;
    Cat::addCats(5);
    cout << "NumOfCats = " << Cat::getNumOfCats() << endl;
    return 0;
}
