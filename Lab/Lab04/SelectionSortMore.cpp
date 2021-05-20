#include <iostream>
#include <iomanip>
using namespace std;

void selectionSort(int *const, const int, bool (*)(int, int));
void swap(int *const, int *const);


bool ascending(int a, int b)
{
    return a < b;
}

bool descending(int a, int b)
{
    return a > b;
}

int main(int argc, char const *argv[])
{
    const int arraySize = 10;
    int a[arraySize] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int order;
    cout << "Enter 1 to sort in ascending order, \n"
         << "Enter 2 to sort in descending order: ";
    cin >> order;

    cout << "Data items in original order\n";
    for (int i = 0; i < arraySize; i++)
    {
        cout << setw(4) << a[i];
    }
    cout << endl;

    if (order == 1)
        selectionSort(a, arraySize, ascending);
    else // if (order == 2)
        selectionSort(a, arraySize, descending);

    cout << "Data items in ascending order\n";
    for (int i = 0; i < arraySize; i++)
    {
        cout << setw(4) << a[i];
    }

    cout << endl;

    return 0;
}

void selectionSort(int *const array, const int size, bool (*compare)(int, int))
{
    int candicate;
    for (int i = 0; i < size - 1; i++)
    {
        candicate = i;
        for (int index = i + 1; index < size; index++)
        {
            if (!(*compare)(array[index], array[candicate]))
                candicate = index;
        }

        swap(&array[i], &array[candicate]);
    }
}

void swap(int *const pe1, int *const pe2)
{
    int h = *pe1;
    *pe1 = *pe2;
    *pe2 = h;
}
