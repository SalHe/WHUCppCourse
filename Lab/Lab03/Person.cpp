#include "../../HW/hw06/Person.cpp"

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    Person::Date date;
    date.setYear(2000);
    date.setMonth(10);
    date.setDay(12);

    Person person;
    person.setId(10);
    person.setIdCardNumber("212121200010121234");
    person.setBirthDate(date);
    person.setGender(Person::Gender::Male);
    
    return 0;
}
