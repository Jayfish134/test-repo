#include <iostream>
#include <string>

using namespace std;

namespace MathOperations //Defining a namespace called MathOperations
{
    void add(int a, int b) {//Returns the sum of two integers
        int sum = a+b; //Defining the program of the function. Adding a and b together.
        cout << "The sum: " << sum << endl; //Printing the output
    }
}

namespace TextOperations 
{
    void concat(string str1, string str2) { //Concatenates two strings
        string concatenated_str = str1 + " " + str2; //Defining the program of the function. Concatenation of the strings, and putting an empty space between the strings.
        cout << "The concatenated string: " << concatenated_str << endl; //Printing the output
    }
}

using namespace MathOperations;
using namespace TextOperations;

int main() //The main program
{
    add(5, 3); //Calling the function and putting values to a and b
    concat("Hello", "world"); //Calling the function and putting values to str1 and str2
    return 0;
}