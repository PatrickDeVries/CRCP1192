#include "triangle.h"

Triangle::Triangle()
{
    height = 3;
    widthFactor = 2;
}

void Triangle::inputSize()
{
    //get user input to determine the size and how many asterisks to add to the triangle each line
    //repeat the function if the user enters an invalid value
    int temp;
    cout << "What would you like the height of the triangle to be?" << endl;
    cin >> temp;
    if (temp <=0)
    {
        cout << "Invalid height. Enter a number greater than 0." << endl;
        inputSize();
        return;
    }
    else
    {
        height = temp;
    }
    cout << "How much wider do you want the triangle to get with each line?" << endl;
    cin >> temp;
    if (temp <=0)
    {
        cout << "Invalid width. Enter a number greater than 0." << endl;
        inputSize();
        return;
    }
    else
    {
        widthFactor = temp;
    }
}

void Triangle::display()
{
    //print line by line
    for (int i = 0; i < height; i++)
    {
        //print initial spaces
        for (int j = 0; j < (widthFactor/2)*(height-i-1); j++)
        {
            cout << " ";
        }
        //print the first *
        cout << "*";

        //if not the last line
        if (i < height-1)
        {
            //print all following spaces
            for (int j = 0; j < i*widthFactor - 1; j++)
            {
                 cout << " ";
            }

            //print final * for all lines but the first
            if (i!=0)
                cout << "*";
        }
        else
        {
            //print the *s
            for (int j = 0; j < i*widthFactor; j++)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}
