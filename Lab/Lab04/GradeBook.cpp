#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
class GradeBook
{
public:
    static const int students = 10;
    GradeBook(string, const int[]);
    void setCourseName(string);
    string getCourseName();
    void displayMessage();
    void processGrades();
    int getMinimum();
    int getMaximum();
    double getAverage();
    void outputBarChart();
    void outputGrades();

private:
    string courseName;
    int grades[students];
};

GradeBook::GradeBook(string name, const int gradesArray[])
{
    setCourseName(name);
    for (int grade = 0; grade < students; grade++)
        grades[grade] = gradesArray[grade];
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
    cout << "\nC1ass average is " << setprecision(2) << fixed << getAverage() << "\nLowest grade is " << getMinimum() << "\nHighest grade is " << getMaximum() << endl;
    outputBarChart();
}

int GradeBook::getMinimum()
{
    int lowGrade = 100;
    for (int grade = 0; grade < students; grade++)
    {
        if (grades[grade] < lowGrade)
            lowGrade = grades[grade];
    }
    return lowGrade;
}

int GradeBook::getMaximum()
{
    int highGrade = 0;
    for (int grade = 0; grade < students; grade++)
    {
        if (grades[grade] > highGrade)
            highGrade = grades[grade];
    }
    return highGrade;
}

double GradeBook::getAverage()
{
    int total = 0;
    for (int grade = 0; grade < students; grade++)
        total += grades[grade];
    return static_cast<double>(total) / students;
}
void GradeBook::outputBarChart()
{
    cout << "\nGrade distribution: " << endl;
    const int frequencySize = 11;
    int frequency[frequencySize] = {};

    for (int grade = 0; grade < students; grade++)
        frequency[grades[grade] / students]++;
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
    cout << "\nThe grades are: \n\n";
    for (int student = 0; student < students; student++)
        cout << "Student" << setw(2) << student + 1 << ": " << setw(3) << grades[student] << endl;
} // end function outputGrades

int main()
{
    int gradesArray[GradeBook::students] = {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
    GradeBook myGradeBook(
        "CS101 Introduction to C++ Programming", gradesArray);
    myGradeBook.displayMessage();
    myGradeBook.processGrades();
}
