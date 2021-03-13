#include <iostream>
#include <iomanip>
#include "Shape.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "��ѡ�񴴽���ͼ�����ͣ�" << endl;
    cout << "1. ������" << endl;
    cout << "2. ������" << endl;
    cout << "3. Բ��" << endl;

    unsigned int shapeType;
    cin >> shapeType;
    Shape *shape;

    double a, b;

    switch (shapeType)
    {
    case 1:
        cout << "��ѡ���������Σ�" << endl;
        cout << "������߳�" << endl;
        cin >> a;
        shape = Rectangle::createSquare(a);
        break;
    case 2:
        cout << "��ѡ���˳����Σ�" << endl;
        cout << "�����볤�Ϳ�" << endl;
        cin >> b >> a;
        shape = Rectangle::createRectangle(a, b);
        break;
    case 3:
        cout << "��ѡ����Բ�Σ�" << endl;
        cout << "������뾶" << endl;
        cin >> a;
        shape = Circle::createCircle(a);
        break;
    default:
        cout << "��Ч������" << endl;
        return 1;
        // break;
    }

    cout << "�Ƿ�����λС����(Y/N)";
    bool toFix;
    char yn;
    cin >> yn;
    toFix = yn == 'Y' || yn == 'y';

    if (toFix)
        cout << setprecision(2) << fixed;

    cout << "�����" << shape->calcArea() << endl;

    delete shape;

    return 0;
}
