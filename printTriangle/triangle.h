#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <iostream>
using namespace std;

class Triangle
{
private:
    int height;
    int widthFactor;
public:
    Triangle();
    void inputSize();
    void display();
};

#endif // TRIANGLE_H
