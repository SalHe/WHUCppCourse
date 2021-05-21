#ifndef _PERSON_H_
#define _PERSON_H_

#include <iostream>
#include <string.h>

using namespace std;

class Date
{
    int year, month, day;

public:
    Date(int year = 2021, int month = 3, int day = 29) : year(year), month(month), day(day) {}
    Date(Date &date)
    {
        this->year = date.year;
        this->month = date.month;
        this->day = date.day;
    }
    ~Date() {}

    int getYear() const
    {
        return year;
    }

    void setYear(int year)
    {
        Date::year = year;
    }

    int getMonth() const
    {
        return month;
    }

    void setMonth(int month)
    {
        Date::month = month;
    }

    int getDay() const
    {
        return day;
    }

    void setDay(int day)
    {
        Date::day = day;
    }
};

class Person
{

private:
    char id[16];
    char name[11];
    char number[7];
    char sex[3];
    Date birthday;

public:
    Person() {}
    Person(Person &p)
    {
        strcpy(this->id, p.id);
        strcpy(this->name, p.name);
        strcpy(this->number, p.number);
        strcpy(this->sex, p.sex);
        this->birthday = p.birthday;
    }
    ~Person() {}

    const char *getId() const
    {
        return id;
    }

    void setId(const char *id)
    {
        strcpy(this->id, id);
    }
    
    const char *getName() const
    {
        return name;
    }

    void setName(const char *name)
    {
        strcpy(this->name, name);
    }
    
    const char *getNumber() const
    {
        return number;
    }

    void setNumber(const char *number)
    {
        strcpy(this->number, number);
    }

    const char *getSex() const
    {
        return sex;
    }

    void setSex(const char *sex)
    {
        strcpy(this->sex, sex);
    }

    Date &getBirthday()
    {
        return birthday;
    }

    void setBirthday(const Date &birthday)
    {
        Person::birthday = birthday;
    }
};

#endif