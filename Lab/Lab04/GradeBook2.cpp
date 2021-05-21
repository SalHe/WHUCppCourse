#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class GradeBook
{
public:
    static const int students = 10;
    static const int tests = 3;
    GradeBook(string, const int[][tests]);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();
    void processGrades();
    int getMinimum();
    int getMaximum();
    double getAverage(const int[], const int);
    void outputBarChart();
    void outputGrades();

private:
    string courseName;
    int grades[students][tests];
};

GradeBook::GradeBook(string name, const int gradesArray[][tests])
{
    setCourseName(name);
    for (int student = 0; student < students; student++)
        for (int test = 0; test < tests; test++)
            grades[student][test] = gradesArray[student][test];
}

void GradeBook::setCourseName(string name)
{
    courseName = name;
}
string GradeBook::getCourseName()
{
    return courseName;
}
void GradeBook::displayMessage()
{
    cout << "welcome to the grade book for\n"
         << getCourseName() << "!" << endl;
}

void GradeBook::processGrades()
{
    outputGrades();
    cout << "\nLowest grade in the grade book is " << getMinimum()
         << "\nHighest grade in the grade book is " << getMaximum() << endl;
    outputBarChart();
}

int GradeBook::getMinimum()
{
    int lowGrade = 100;
    for (int student = 0; student < students; student++)
    {
        for (int test = 0; test < tests; test++)
        {
            if (grades[student][test] < lowGrade)
                lowGrade = grades[student][test];
        }
    }
    return lowGrade;
}

int GradeBook::getMaximum()
{
    int highGrade = 0;
    for (int student = 0; student < students; student++)
    {
        for (int test = 0; test < tests; test++)
        {
            if (grades[student][test] > highGrade)
                highGrade = grades[student][test];
        }
    }
    return highGrade;
}

double GradeBook::getAverage(const int setOfGrades[], const int grades)
{
    int total = 0;
    for (int grade = 0; grade < grades; grade++)
        total += setOfGrades[grade];
    return static_cast<double>(total) / grades;
}

void GradeBook::outputBarChart()
{
    cout << "\novera1l grade distribution: " << endl;
    const int frequencySize = 11;
    int frequency[frequencySize] = {};
    for (int student = 0; student < students; student++)
        for (int test = 0; test < tests; test++)
            ++frequency[grades[student][test] / 10];
    for (int count = 0; count < frequencySize; count++)
    {
        if (count == 0)
            cout << "0-9: ";
        else if (count == 10)
            cout << "100: ";
        else
            cout << count * 10 << "-" << (count * 10) + 9 << ": ";
        for (int stars = 0; stars < frequency[count]; stars++)
            cout << '*';
        cout << endl;
    }
}

void GradeBook::outputGrades()
{
    cout << "\nThe grades are : \n\n";
    cout << "        ";
    for (int test = 0; test < tests; test++)
        cout << "Test " << test + 1 << "";
    cout << "Average" << endl;
    for (int student = 0; student < students; student++)
    {
        cout << "Student " << setw(2) << student + 1;
        for (int test = 0; test < tests; test++)
            cout << setw(8) << grades[student][test];
        double average = getAverage(grades[student], tests);
        cout << setw(9) << setprecision(2) << fixed << average << endl;
    }
}

int main()
{
    int gradesArray[GradeBook::students][GradeBook::tests] =
        {{87, 96, 70},
         {68, 87, 90},
         {94, 100, 90},
         {100, 81, 82},
         {83, 65, 85},
         {78, 87, 65},
         {85, 75, 83},
         {91, 94, 100},
         {76, 72, 84},
         {87, 93, 73}};
    GradeBook myGradeBook(
        "CS101 Introduction to C++ Programming", gradesArray);
    myGradeBook.displayMessage();
    myGradeBook.processGrades();
}
