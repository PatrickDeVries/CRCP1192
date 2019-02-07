#include <iostream>
#include <ctime>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    cout << "test file name?" << endl;
    string filename;
    cin >> filename;
    cout << "test file ints?" << endl;
    ulong integers;
    cin >> integers;
    srand((unsigned)time(0));
    ofstream ofile (filename);

    for (int i = 0; i < integers; i++)
    {
        ofile << rand()%100 +1 << endl;
    }
    return 0;
}
