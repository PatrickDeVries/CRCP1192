/* This program uses merge sort
 * Patrick DeVries
 */
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <chrono>
using namespace std;

void merge(int arr[], int min, int max, int middle);
void mergeSort(int arr[], int min, int max);
void printArr(ostream& out, int arr[], int inFile);

int main()
{
    string filename;
    cout << "What is the file name of the source file?" << endl;
    cin >> filename;
    int inFile;
    cout << "How many ints are in the file?" << endl;
    cin >> inFile;

    int* arr = new int[inFile];
    ifstream ifile(filename);

    for (int i = 0; i < inFile; i++)
    {
        ifile >> arr[i];
    }

    ifile.close();

    cout << "Starting sort" << endl;
    auto start = chrono::high_resolution_clock::now();

    mergeSort(arr, 0, inFile-1);

    auto stop = chrono::high_resolution_clock::now();
    cout << "Finished sorting. Took " << (double) (chrono::duration_cast<chrono::nanoseconds>(stop - start).count())/1000000 << "ms" << endl;

    ofstream ofile("output.txt");
    printArr(ofile, arr, inFile);
    return 0;
}

//merge for merge sorting
void merge(int arr[], int min, int max, int middle)
{
    //get the number of elements in the halves of the array
    int inLow = middle - min +1;
    int inHigh = max - middle;

    //create new arrays for the halves of the arrray
    int* low = new int[inLow];
    int* high = new int[inHigh];

    //add items to new arrays
    for(int i = 0; i < inLow; i++)
    {
        low[i] = arr[min + i];
    }
    for (int i = 0; i < inHigh; i++)
    {
        high[i] = arr[middle + i + 1];
    }

    int lowIndex = 0;
    int highIndex = 0;
    int mergedIndex = min;

    //loop through each item of each array, swapping if necessary
    while (lowIndex < inLow && highIndex < inHigh)
    {
        if (low[lowIndex] < high[highIndex])
        {
            arr[mergedIndex] = low[lowIndex++];
        }
        else
        {
            arr[mergedIndex] = high[highIndex++];
        }
        mergedIndex++;
    }

    //add items back to original array in sorted order
    while (lowIndex < inLow)
    {
        arr[mergedIndex++] = low[lowIndex++];
    }
    while (highIndex < inHigh)
    {
        arr[mergedIndex++] = high[highIndex++];
    }
    //delete dynamic arrays
    delete[] low;
    delete[] high;
}

//merge sort
void mergeSort(int arr[], int min, int max)
{
    if (min < max)
    {
        int middle = min + (max - min)/2;

        //descend left
        mergeSort(arr, min, middle);
        //descend right
        mergeSort(arr, middle+1, max);

        //merge back elements
        merge(arr, min, max, middle);
    }
}

void printArr(ostream& out, int arr[], int inFile)
{
    //print array with a new line every ten elements
    for (int i = 0; i < inFile; i++)
    {
        out << arr[i] << ", ";
        if ((i+1)%10 == 0)
        {
            out << endl;
        }
    }
}
