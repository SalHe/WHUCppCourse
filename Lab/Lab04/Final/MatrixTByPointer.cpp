#include <iostream>
#include <iomanip>
using namespace std;

void t(int **m, const int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int tmp = *((int *)m + i * size + j);
            *((int *)m + i * size + j) = *((int *)m + j * size + i);
            *((int *)m + j * size + i) = tmp;
        }
    }
}

void show(int **m, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << setw(4) << *((int *)m + i * size + j);
        cout << endl;
    }
}

int main(int argc, char const *argv[])
{
    int **matrix = (int **)new int[9]{1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "原矩阵：" << endl;
    show(matrix, 3);
    t(matrix, 3);
    cout << "转置后：" << endl;
    show(matrix, 3);

    return 0;
}
