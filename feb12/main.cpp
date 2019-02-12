#include <iostream>
#include <string>
#include "student.h"

using namespace std;

int main()
{
    Student stu(3, "Hannah");
    stu.display();
    cout << 3.0/2.0 << endl;

    return 0;
}

//single file class definition
/*class Student
{
private:
    string name;
    int grade;
public:
    Student()
    {
        name = "";
        grade = -1;
    }
    Student(int g, string n)
    {
        name = n;
        grade = g;
    }
    int getGrade()
    {
        return grade;
    }
    string getName()
    {
        return name;
    }
    void setName(string x)
    {
        name = x;
    }
    void setGrade(int x)
    {
        grade = x;
    }
    void display()
    {
        cout << "Student name: " << name << "\nStudent grade: " << grade << endl;
    }
};*/

