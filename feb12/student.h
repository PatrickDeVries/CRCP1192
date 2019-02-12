#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int grade;
public:
    Student();
    Student(int g, string n);
    int getGrade();
    string getName();
    void setName(string x);
    void setGrade(int x);
    void display();
};

#endif // STUDENT_H
