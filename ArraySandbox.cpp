#include <iostream>
using namespace std;

//declare global constant to set the size of the 1-D array.
const int ARRAY_SIZE = 10;

int main()
{

    cout << "Welcome to Prof. Erickson's Array Sandbox." << endl
         << "This is a program to help you learn about 1-D arrays" << endl
         << "First review the sample code provided below." << endl
         << "Your task is to write some new code where indicated in the comments." << endl;


//Sample code
    cout << endl << "Sample Code: " << endl;

    int myNumbers[ARRAY_SIZE];  //declare myNumbers array with size given by ARRAY_SIZE

//Let's start with a sample. We initialize our array values to the number zero:

    for (int i = 0; i < ARRAY_SIZE; i++)
        myNumbers[i] = 0;

//Now, let's output the values to the screen.

    cout << "myNumbers contains " << ARRAY_SIZE << " numbers" << endl
         << "first all numbers are initialized to zero: ";

    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << myNumbers[i] << " ";

    cout << endl;
//Suppose we want to set our array values to 0 through 9 in increasing order.

    for (int i = 0; i < ARRAY_SIZE; i++)
        myNumbers[i] = i;

//Now, let's output the values to the screen, once again.

    cout << "Now each element is assigned an increasing number: ";

    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << myNumbers[i] << " ";

//Let's try outputting just the first and last numbers.

    cout << endl << "The first item in myNumbers (index #0) is: " << myNumbers[0] << endl;

    cout << "The last item in myNumbers (index #" << ARRAY_SIZE - 1 << ") is: " << myNumbers[ARRAY_SIZE - 1] << endl;





//End of sample code
//Now it's your turn to play with this code.
//Complete the code in the following sections so that your code matches
//The output provided in the assignment handout


    cout << endl << "*************************** Practice Questions ********************************";
    cout << endl << "Question 1: " << endl;
//Question 1: Following the examples given, write another loop to modify the array myNumbers.
//Write a loop which will...
//1) set the values of odd-numbered elements (1, 3, 5, 7, and 9) to 1
// and set the even numbered elements (0, 2, 4, 6, 8) equal to zero.
//2) Then, output the values of the array to the screen, separated by a space.

//Remember we can use %2 to check for even/odd.  Use braces if your loop contains multiple statements.
//Write your code directly in this program.


    cout << endl << endl << "Question 2: " << endl;
//Question 2: Following the examples given, write another loop to modify the array myNumbers.
//Write a loop which will...
//1) Set the array values to 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 (index 0 is set to 9, then each subsequent index set to one number less)
//2) output the values of the array to the screen, separated by a space.



    cout << endl << endl << "Question 3: " << endl;
//Question 3: Following the examples given, write another loop to modify the array myNumbers.
//Write some code and a loop which will...
//1) Sum all values in the array and 2) output the sum to the screen


    cout << endl << endl << "Question 4: " << endl;
//Question 4: Following the examples given, write another loop to modify the array myNumbers.
//Write some code and a loop which will...
//1) Sum the first 7 values in the array and output the sum to the screen


    cout << endl << endl << "Question 5: " << endl;
//Question 5: Following the examples given, declare another array called myOtherNumbers.
//The myOtherNumbers array should be of type int and size ARRAY_SIZE.
//Use a loop to initialize myOtherNumbers so that its values are equal to the corresponding values in myNumbers, but doubled.
//so that the values of myOtherNumbers from index 0 to index 9 are 18 16 14 12 10 8 6 4 2 0
//Then, output the values of myOtherNumbers to the screen.


    cout << endl << endl << "Question 6: " << endl;
//Following the example, declare another array called mySum.
//The mySum array should be of type int and size ARRAY_SIZE.
//Use a loop to initialize mySum so that its values are equal to the
//sum of the myNumbers and myOtherNumbers at the same index.
//For example, index 0 should be set equal to 27 because index 0 of myNumbers is 9
//and index 0 of myOtherNumbers is 18, so the sum is 27.




//end of sandbox
    cout << endl << endl << "That's the end of this practice sandbox.";

    return 0;


}