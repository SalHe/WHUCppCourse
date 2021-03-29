#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    enum Gender {
        Male, Female
    };

    class Date {
        int year, month, day;

    public:
        Date(int year = 2021, int month = 3, int day = 29) : year(year), month(month), day(day) {}
        Date(Date & date){
            this->year = date.year;
            this->month = date.month;
            this->day = date.day;
        }
        ~Date() {}

        int getYear() const {
            return year;
        }

        void setYear(int year) {
            Date::year = year;
        }

        int getMonth() const {
            return month;
        }

        void setMonth(int month) {
            Date::month = month;
        }

        int getDay() const {
            return day;
        }

        void setDay(int day) {
            Date::day = day;
        }

    };

private:
    int id;
    Gender gender;
    Date birthDate;
    string idCardNumber;

public:

    Person() {}
    Person(Person &p){
        this->id = p.id;
        this->gender = p.gender;
        this->birthDate = p.birthDate;
        this->idCardNumber = p.idCardNumber;
    }
    ~Person() {}

    int getId() const {
        return id;
    }

    void setId(int id) {
        Person::id = id;
    }

    Gender getGender() const {
        return gender;
    }

    void setGender(Gender gender) {
        Person::gender = gender;
    }

    const Date &getBirthDate() const {
        return birthDate;
    }

    void setBirthDate(const Date &birthDate) {
        Person::birthDate = birthDate;
    }

    const string &getIdCardNumber() const {
        return idCardNumber;
    }

    void setIdCardNumber(const string &idCardNumber) {
        Person::idCardNumber = idCardNumber;
    }


};