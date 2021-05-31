#include "./../Lab04/Final/Person.h"

#include <stdio.h>
#include <string.h>

using namespace std;

class Student : public Person
{
private:
    char classNo[7];

public:
    const char *getClassNo() const
    {
        return classNo;
    }

    void setClassNo(const char *classNo)
    {
        strcpy(this->classNo, classNo);
    }

    virtual void show()
    {
        printf("I'm a student in Class %s: \n\t", classNo);
        Person::show();
    }
};

class Teacher : public Person
{
private:
    char principalship[11];
    char department[21];

public:
    // Teacher() {}
    // Teacher(Teacher &teacher) : Person(teacher)
    // {
    //     strcpy(this->principalship, teacher.principalship);
    //     strcpy(this->department, teacher.department);
    // }

    const char *getPrincipalship() const
    {
        return principalship;
    }

    void setPrincipalship(const char *principalship)
    {
        strcpy(this->principalship, principalship);
    }

    const char *getDepartment() const
    {
        return department;
    }

    void setDepartment(const char *department)
    {
        strcpy(this->department, department);
    }

    virtual void show()
    {
        printf("I'm a teacher with Principalship %s, in depart %s: \n\t", principalship, department);
        Person::show();
    }
};

class Graduated : public Student
{
private:
    char subject[21];
    Teacher adviser;

public:
    Teacher &getAdvisor() { return adviser; }
    void setTeacher(Teacher adviser)
    {
        this->adviser = adviser;
    }

    const char *getSubject() const
    {
        return subject;
    }

    void setSubject(const char *subject)
    {
        strcpy(this->subject, subject);
    }

    virtual void show()
    {
        printf("I'm a Graduated majoring in %s: \n\t", subject);
        Person::show();
        printf("My teacher is:\n\t");
        adviser.show();
    }
};

class TA : public Graduated, public Teacher
{
public:
    virtual void show()
    {
        printf("I'm a TA, and:\n\t");
        Graduated::show();
        printf("and:\n\t");
        Teacher::show();
    }
};

int main(int argc, char const *argv[])
{
    Date date;
    date.setYear(2021);
    date.setMonth(5);
    date.setDay(1);

    printf("------------------------------------\n");
    Student student;
    student.setId("Stu001");
    student.setName("Student");
    student.setNumber("12138");
    student.setSex("B");
    student.setBirthday(date);
    student.setClassNo("1901");
    student.show();

    printf("------------------------------------\n");
    Teacher teacher;
    teacher.setId("Tea001");
    teacher.setName("Teacher");
    teacher.setNumber("12139");
    teacher.setSex("G");
    teacher.setBirthday(date);
    teacher.setPrincipalship("Mentor");
    teacher.setDepartment("CS");
    teacher.show();

    printf("------------------------------------\n");
    Graduated graduated;
    graduated.setId("Gra001");
    graduated.setName("Graduated");
    graduated.setNumber("12140");
    graduated.setSex("G");
    graduated.setBirthday(date);
    graduated.setSubject("SE");
    graduated.setTeacher(teacher);
    graduated.show();

    printf("------------------------------------\n");
    TA ta;
    ta.Graduated::setId("Tea001");
    ta.Graduated::setName("Teacher");
    ta.Graduated::setNumber("12139");
    ta.Graduated::setSex("G");
    ta.Graduated::setBirthday(date);
    ta.setSubject("SE");
    ta.setTeacher(teacher);
    ta.setClassNo("1818");
    ta.Teacher::setId("Tea002");
    ta.Teacher::setName("Teacher2");
    ta.Teacher::setNumber("12150");
    ta.Teacher::setSex("B");
    ta.Teacher::setBirthday(date);
    ta.setPrincipalship("Assistant");
    ta.setDepartment("CS");
    ta.show();

    return 0;
}
