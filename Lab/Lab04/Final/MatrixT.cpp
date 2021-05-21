#include <iostream>
#include <iomanip>
using namespace std;

void t(int m[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int tmp = m[i][j];
            m[i][j] = m[j][i];
            m[j][i] = tmp;
        }
    }
}

void show(int m[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << setw(4) << m[i][j];
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    cout << "原矩阵：" << endl;
    show(matrix);
    t(matrix);
    cout << "转置后：" << endl;
    show(matrix);

    return 0;
}
