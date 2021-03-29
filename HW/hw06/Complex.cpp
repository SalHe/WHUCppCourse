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

int main(int argc, char const *argv[])
{
    Complex c1(3, 5); // 用复数3+5i初始化c1
    Complex c2 = 4.5; // 用实数4.5初始化c2
    c1.add(c2);       // 将c1与c2相加，结果保存在c1中
    c1.show();        // 将c1输出（这时的结果应该是7.5+5i）
    return 0;
}
