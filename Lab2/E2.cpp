#include <iostream>
using namespace std;

// Creating a function to swap two floating values without pointers or references
void swapWithoutPointersOrReferences(float a, float b)
{
    float placeholderOfValueA = a; // Creating a placeholder value of the value a
    a = b; // a now gets the value of b
    b = placeholderOfValueA; // b gets the value of the original value of a

    cout << "a is now " << a << " and b is now " << b << endl; // Printing out the swapped values
}

// Creating a function to swap two floating values using pointers
void swapUsingPointers(float *c, float *d)
{
    float placeholderOfValueC = *c; // the value that c points to is now saved under placeholderOfValueC
    *c = *d; // The value that c points to gets the value that d points to
    *d = placeholderOfValueC; // The value that d points to now gets the original value that c pointed to

    cout << "c is now " << *c << " and d is now " << *d << endl; // Printing out the swapped values
}

// Creating a function to swap two floating values uring references
void swapUsingReferences(float &e, float &f)
{
    float refE = e; // Creating a float variable refE and storing the value of the variable referenced by e to it
    e = f; // Now e gets the value of the variable that is referenced by f
    f = refE; // Now f gets the value of refE which is the value originally referenced by e

    cout << "e is now " << e << " and f is now " << f << endl; // Printing out the swapped values
}

int main()
{
    // Assigning values for the variables and calling the functions
    float a = 2.2, b = 7.1;
    swapWithoutPointersOrReferences(a, b);

    float c = 1.2, d = 4.3;
    swapUsingPointers(&c, &d);

    float e = 9.6, f = 5.4;
    swapUsingReferences(e, f);

    return 0;
}