#include <iostream>

using namespace std;

void printOne()
{
    cout << "art 1" << endl;
}
void printTwo()
{
   cout << "art 2" << endl;
}
void printThree()
{
    cout << "art 3" << endl;
}
void printFour()
{
    cout << "art 4" << endl;
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


int main()
{
    string trash;
    cout << "Welcome to the slide show! Enter anything to begin." << endl;
    cin >> trash;
    bool active = true;
    bool first = true;
    while(active)
    {
        if (!first)
            cout << "Slideshow ended, returning to beginning." << endl;
        first = false;

        printOne();
        active = promptContinue();
        if (!active)
            break;

        printTwo();
        active = promptContinue();
        if (!active)
            break;

        printThree();
        active = promptContinue();
        if (!active)
            break;

        printFour();
        active = promptContinue();
    }
    cout << "Thank you for viewing :)" << endl;
    return 0;
}
