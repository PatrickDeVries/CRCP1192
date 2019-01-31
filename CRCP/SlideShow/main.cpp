#include <iostream>

using namespace std;
void printAscii(int x);
void printLogo();
bool promptContinue();

int main()
{
    string trash;
    printLogo();
    cout << "Welcome to the slide show! Enter anything to begin." << endl;
    cin >> trash;
    bool active = true;
    int x = 0;
    while(active)
    {
        printAscii(x++%4);
        active = promptContinue();
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

bool promptContinue()
{
    while (true)
    {
        string temp;
        cout << "To view the next slide enter \"n\". To exit enter \"x\"" << endl;
        cin >> temp;
        if (temp.compare("n") == 0)
            return true;
        else if (temp.compare("x") == 0)
            return false;
        else
            cout << "Invalid entry." << endl;
    }
}
