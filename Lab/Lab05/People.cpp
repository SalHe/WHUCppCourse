// 第8章——三——(3)

#include <iostream>

using namespace std;

class People
{
private:
    int id;

public:
    People(int id) : id(id) {}

    bool operator==(People other) { return id == other.id; }
};

int main(int argc, char const *argv[])
{
    People p1(1);
    People p2(2);
    People p1_another(1);

    cout << (p1 == p2) << endl;
    cout << (p1 == p1_another) << endl;

    return 0;
}
