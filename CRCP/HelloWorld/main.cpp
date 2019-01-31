/* Patrick DeVries
 * 47381598
 * CRCP 1192
 * Simple hello world program */

//includes the input/output stream to allow printing using cout
#include <iostream>

//adds the std namespace and scope resolution operator to the commands to use the standard c++ library
using namespace std;

//creates the main function which returns type int and accepts command line arguments into argv
//Starting point of the program
int main(int argc, const char* argv[])
{
    //prints Hello World! to the terminal using console output then creates
    //a new line using endl which also flushes the buffer stream
    cout << "Hello World!" << endl;

    //return 0 to know that the program is getting through main and exiting correctly
    return 0;
}
