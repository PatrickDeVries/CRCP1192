#include <iostream>

using namespace std;
void printAscii(int x);
void printLogo();

int main()
{
    string temp;
    printLogo();
    cout << "Welcome to the slide show! Enter anything to begin." << endl;
    cin >> temp;
    temp = " ";
    int x = 0;

    while(temp.compare("x") != 0)
    {
        printAscii(x++%4);
        cout << "To exit enter 'x', otherwise enter anything else to continue" << endl;
        cin >> temp;
    }

    cout << "Thank you for viewing :)" << endl;
    return 0;
}

void printAscii(int x)
{
    switch (x)
    {
    case 0:
        cout << "art 1" << endl;
        break;
    case 1:
        cout << "art 2" << endl;
        break;
    case 2:
        cout << "art 3" << endl;
        break;
    case 3:
        cout << "art 4" << endl;
         cout << "Slideshow ended, returning to beginning." << endl;
        break;
    }
}

void printLogo()
{
    cout << "logo" << endl;
}
