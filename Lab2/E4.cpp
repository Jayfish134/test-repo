#include <iostream>

using namespace std;

int main()
{
    int a; // Defining variable, it's a number that the user will input
    cout << "Input a number: "; // Printing out instructions for the user
    cin >> a; // Getting the value a from the user

    while (a == 0) // If the user inputs 0, the program will keep asking for a number
    {
        cout << "Input a number: "; // Printing out instructions for the user
        cin >> a; // Getting the value a from the user
    }

    if (a > 0) // If a is a positive number, the program will print out the square of a
    {
        int square = a * a; // Defining the value for square
        cout << "The square of the number is " << square << endl; // Printing out the square
    }

    // If user inputs a to be a negative number, the code stops

    return 0;
}