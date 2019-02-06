/* Patrick DeVries
 * 47381598
 * CRCP 3305
 * 2/5/19
 * This program accepts the dimensions of a triangle and prints it in ascii */
#include <iostream>
#include "triangle.h"

using namespace std;

int main()
{
    cout << "Pick your triangle's dimensions:" << endl;
    //declare the triangle
    Triangle tri;
    //get sizes
    tri.inputSize();
    //print triangle
    cout << "Your triangle:" << endl;
    tri.display();

    return 0;
}
