#include <iostream>
#include <string>

using namespace std;

int main()
{
    float a, b; // Defining variables
    char op; // Defining the operator character

    cout << "Input two numbers and an operator" << endl; // Printing out sintructions for the user
    cout << "Number input 1: ";
    cin >> a; // Getting the first number from user
    cout << "Number input 2: ";
    cin >> b; // Getting the second number from the user
    cout << "Input the operator (+, -, * or /): "; 
    cin >> op; // Getting the operator from the user

    switch(op)
    {
        case '+': // If the user inputs + as the character, this case's code runs
            cout << "The sum is " << a + b << endl;
            break;
        case '-': // If the user inputs - as the character, this case's code runs
            cout << "The difference is " << a - b << endl;
            break;
        case '*': // If the user inputs * as the character, this case's code runs
            cout << "The product is " << a * b << endl;
            break;
        case '/': // If the user inputs / as the character, this case's code runs
            cout << "The division is " << a / b << endl;
            break;
    }

    return 0;
}