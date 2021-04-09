#include <iostream>
#include <iomanip>
#include "Shape.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "请选择创建的图形类型：" << endl;
    cout << "1. 正方形" << endl;
    cout << "2. 长方形" << endl;
    cout << "3. 圆形" << endl;

    unsigned int shapeType;
    cin >> shapeType;
    Shape *shape;

    double a, b;

    switch (shapeType)
    {
    case 1:
        cout << "您选择了正方形：" << endl;
        cout << "请输入边长" << endl;
        cin >> a;
        shape = Rectangle::createSquare(a);
        break;
    case 2:
        cout << "您选择了长方形：" << endl;
        cout << "请输入长和宽" << endl;
        cin >> b >> a;
        shape = Rectangle::createRectangle(a, b);
        break;
    case 3:
        cout << "您选择了圆形：" << endl;
        cout << "请输入半径" << endl;
        cin >> a;
        shape = Circle::createCircle(a);
        break;
    default:
        cout << "无效的类型" << endl;
        return 1;
        // break;
    }

    cout << "是否保留两位小数？(Y/N)";
    bool toFix;
    char yn;
    cin >> yn;
    toFix = yn == 'Y' || yn == 'y';

    if (toFix)
        cout << setprecision(2) << fixed;

    cout << "面积：" << shape->calcArea() << endl;

    delete shape;

    return 0;
}
