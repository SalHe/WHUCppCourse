#include "Person.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
#define SIZE 5
    Person person[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Person " << i << ": " << endl;
        string tmp;

        cout << "Id: " << endl;
        cin >> tmp;
        person[i].setId(tmp.c_str());

        cout << "Name: " << endl;
        cin >> tmp;
        person[i].setName(tmp.c_str());

        cout << "Number: " << endl;
        cin >> tmp;
        person[i].setNumber(tmp.c_str());

        cout << "Sex: " << endl;
        cin >> tmp;
        person[i].setSex(tmp.c_str());

        int number;

        cout << "Birth-Year: " << endl;
        cin >> number;
        person[i].getBirthday().setYear(number);

        cout << "Birth-Month: " << endl;
        cin >> number;
        person[i].getBirthday().setMonth(number);

        cout << "Birth-Day: " << endl;
        cin >> number;
        person[i].getBirthday().setDay(number);
    }

    for (int i = 0; i < SIZE; i++)
    {
        // 不想写cout了。。。
        printf("%s(%s) is %s, born in %04d-%02d-%02d. You can call him/her at %s\n",
               person[i].getName(),
               person[i].getId(),
               person[i].getSex(),
               person[i].getBirthday().getYear(),
               person[i].getBirthday().getMonth(),
               person[i].getBirthday().getDay(),
               person[i].getNumber());
    }

    return 0;
}
