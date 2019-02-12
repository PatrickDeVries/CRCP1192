#include "student.h"

Student::Student()
{
    name = "";
    grade = -1;
}
Student::Student(int g, string n)
{
    name = n;
    grade = g;
}
int Student::getGrade()
{
    return grade;
}
string Student::getName()
{
    return name;
}
void Student::setName(string x)
{
    name = x;
}
void Student::setGrade(int x)
{
    grade = x;
}
void Student::display()
{
    cout << "Student name: " << name << "\nStudent grade: " << grade << endl;
}
