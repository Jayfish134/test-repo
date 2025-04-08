#include <iostream>
using namespace std;

int main()
{
    int x = 20; // Defining variable int x
    int* ptr1 = &x; // Points to x (stores the address of x)
    int* ptr2 = ptr1; // Copies the address of ptr1 (shallow copy)

    /* Assuming that "Modify the value using one pointer and observe the effect on the other." means that I have to
    modify the value of x by using a pointer: */
    *ptr1 = 10; // Going to the memory address of x which ptr1 points towards and changing the stored value to 10

    // Printing out values to observe their changes
    cout << ptr1 << endl;
    cout << *ptr1 << endl;
    cout << ptr2 << endl;
    cout << *ptr2 << endl;
}

/* When modifying the value of x by changing the stored value to which ptr1 is pointing to,
ptr2 which is pointing to ptr1 changes its value (address) too. */
