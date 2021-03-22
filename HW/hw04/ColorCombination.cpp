#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int count = 0;
    const char *colors[] = {"红", "黄", "蓝", "白", "黑"};

    for (int c1 = 0; c1 < 5; c1++)
        for (int c2 = c1 + 1; c2 < 5; c2++)
            for (int c3 = c2 + 1; c3 < 5; c3++)
            {
                count++;
                cout << colors[c1] << "," << colors[c2] << "," << colors[c3] << endl;
            }

    cout << endl
         << "共计" << count << "种" << endl;

    return 0;
}
