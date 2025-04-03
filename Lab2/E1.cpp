#include <iostream>

using namespace std;

int multiply(int a, int b) // Function that returns the product of a and b
{
    return a * b;
}

double multiply(double a, double b)
{
    return a * b;
}



int main()
{
    int integer_product = multiply(1, 2);
    double double_product = multiply (1.2, 1.2);
    
    cout << "The product integers is " << multiply(1, 2) << endl; // Printing out the products to the user by calling the function
    cout << "The product of doubles is " << double_product << endl;

    return 0;
}