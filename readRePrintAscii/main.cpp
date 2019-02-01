/*Patrick DeVries
 * 47381598
 * CRCP 1192
 * this program reads in an ascii art file and converts it into c+ code that will print it
 * */
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "What is the file name and path of the ascii art to be converted?" << endl;
    string fileName;
    cin >> fileName; //get file name/path from user
    fstream ifile(fileName); //open file
    string ascii = " ";
    while (!ifile.eof()) //read until the end of the file
    {
        string temp = " "; //temp variable to store next line of art
        getline(ifile, temp); //read next line up until \n into temp string
        ascii = ascii+temp + '\n'; //add this line to the ascii string with a new line character
    }
    cout << ascii; //print the input art
    ifile.close(); //close input file
    int iter = 0; //iterator for ascii string
    cout << "File name to print code to?" << endl;
    cin >> fileName;
    ofstream ofile(fileName); //open output file
    ofile << "cout << \"";
    while (iter < ascii.length() -1) //print out every character in the ascii string
    {
        if (ascii[iter] == '\\') //if the character is a \ print two
        {
            ofile << "\\\\";
        }
        else if(ascii[iter] == '\n') //if the character is a new line end the cout line and add a new one
        {
            ofile << "\\n\";";
            ofile << "\ncout << \"";
        }
        else if(ascii[iter] == '\"') //if the character is a " print a \"
        {
            ofile << "\\\"";
        }
        else //for any normal character print normally
        {
            ofile << ascii[iter];
        }
        iter++; //increment iterator
    }
    ofile << "\";";
    ofile.close(); //close output file
    return 0;
}

//telnet towel.blinkenlights.nl
