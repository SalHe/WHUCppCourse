#include <iostream>
using namespace std;
class Sample
{
private:
    int x;
    int &rx;
    const float pi;

public:
    Sample(int x1) : x(x1), pi(3.14), rx(x)
    {
    }
    void Print()
    {
        cout << "x=" << x << " "
             << "rx=" << rx << " "
             << "pi=" << pi << endl;
    }
};
int main()
{
    Sample a(10);
    a.Print();
    return 0;
}