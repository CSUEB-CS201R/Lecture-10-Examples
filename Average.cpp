#include <iostream>
using namespace std;

int main()
{
    //this code sets firstArray equal to secondArray
   //then, it outputs the two arrays.

    const int SIZE = 5;
    int myArray[SIZE] = {1, 2, 3, 4, 5};

    int sum = 0; //initialize summing variable

    cout << "Calculating sum and average of the array containing: ";
    for (int i = 0; i < SIZE; i++)
        cout << myArray[i] << " ";

    for (int i = 0; i < SIZE; i++)
        sum = sum + myArray[i];

    cout << endl << "The sum of the values in myArray is: " << sum
         << endl << "and the average is: " << sum / SIZE;

    return 0;
}