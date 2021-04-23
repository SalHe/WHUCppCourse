#include <iostream>
using namespace std;
class student
{
private:
    static int count; //统计学⽣的总数
    int studentno;    //普通数据成员，学号
public:
    student()
    {
        ++count;
        studentno = count;
    }
    void print()
    {
        cout << "student" << studentno << " ";
        cout << "count=" << count << endl;
    }
};
int student::count = 0;
//静态数据成员必须在类外初始化，前面不能加static
int main()
{
    student student1;
    student1.print();
    cout << "----------" << endl;
    student student2;
    student1.print();
    student2.print();
    cout << "----------" << endl;
    student student3;
    student1.print();
    student2.print();
    student3.print();
    cout << "----------" << endl;
    student student4;
    student1.print();
    student2.print();
    student3.print();
    student4.print();
    return 0;
}
