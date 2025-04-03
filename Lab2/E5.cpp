#include <iostream>

using namespace std;

int main()
{
    int array1[] = {1, 4, 7, 10, 15}; // Defining an example array
    int n = sizeof(array1) / sizeof(array1[0]);  // Calculating the number of elements in the array

    int array2[n]; // The soon-to-be "reversed" array of array1
    
    int* arrayptr = &array1[0] + n - 1; // Creating a pointer to store the address of the last element of array1

    for (int i = 0; i < n; i++) // Transversal of array1
    {
        /*array2[0] will get the last value in array1, so array2[0] = 15, array2[1] = 10, etc.*/
        array2[i] = *arrayptr; // Assigning the value stored in the pointer as the value of the element of array2[i]
        arrayptr--; // Moving the pointer backwards
    }

    for (int i = 0; i < n; i++) 
    {
        if(i == n - 1)
        {
            cout << array2[i];
            /*Code to neaten up the output. If the last element is being printed out, 
            there will be no comma printed out at the end of the last element*/
        }
        else
        {
            cout << array2[i] << ", "; // Printing out the new array element by element
        }
    }

    cout << endl; // Printing an empty line for aesthetic purposes regarding the terminal

    return 0;
}