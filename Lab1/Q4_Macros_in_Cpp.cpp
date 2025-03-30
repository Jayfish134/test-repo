#include <iostream>
#include <string>

using namespace std;

#define SQUARE(x) ((x) * (x)) //Macro that calculates the square of x 

int main()
{
    int x; //Defining variable x

    cout << "Input a number to return the square for: " << endl; //Prints out instructions for the user
    
    cin >> x; //Gets the input from the user to assign a value for x
    
    cout << "The square of x is " << SQUARE(x) << endl; //Prints out the square of x

    return 0;
}