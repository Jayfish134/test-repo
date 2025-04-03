#include <iostream>

using namespace std;

int main()
{
    int array1[] = {1, 4, 7, 10, 15}; // Defining an example array
    int n = sizeof(array1) / sizeof(array1[0]);  // Calculating the number of elements in the array

    int array2[n]; // The soon-to-be "reversed" array of array1
    
    int* arrayptr = array1 + n - 1; // Creating a pointer to point at the last element of array1

    for (int i = 0; i < n; i++) // Transversal of array1
    {
        /*array2[0] will get the last value in array1, so array2[0] = 15, array2[1] = 10, etc.*/
        array2[i] = *arrayptr;
        arrayptr--; // Moving the pointer backwards
    }

    for (int i = 0; i < n; i++) 
    { 
        cout << array2[i] << ", "; // Printing out the new array element by element
    }

    cout << endl; // Printing an empty line for aesthetic purposes regarding the terminal

    return 0;
}