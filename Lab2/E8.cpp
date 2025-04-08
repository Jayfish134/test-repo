#include <iostream>
using namespace std;

int main()
{
    int a = 50; // Defining variable a
    int& refA = a; // Reference to a
    refA = 5; // Modifying refA modifies a

    // Printing out the values for a and refA to check its values after the change
    cout << "int a: " << a << endl << "refA: " << refA << endl;
}

// QUESTION: What happens to variable a when you change refA?
// ANSWER: Changing refA changes the value assigned to a.