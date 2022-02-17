#include <iostream>
using namespace std;

int main()
{
//this code sets firstArray equal to secondArray
//then, it outputs the two arrays.

    const int SIZE = 5;
    int myArray[SIZE] = {1, 2, 3, 4, 5};

    int max = myArray[0]; //initialize max variable to first value in array
    int min = myArray[0]; //initialize min variable to first value in array


    cout << "Finding minimum and maximum values in the array containing: ";
    for (int i = 0; i < SIZE; i++)
        cout << myArray[i] << " ";

    for (int i = 0; i < SIZE; i++)
    {
        if (myArray[i] > max)
            max = myArray[i];

        if (myArray[i] < min)
            min = myArray[i];
    }


    cout << endl << "The maximum of the values in myArray is: " << max
         << endl << "and the minimum is: " << min;

    return 0;
}