#include <iostream>
using namespace std;

int multiply(int a, int b) // Function that returns the product of two integers
{
    return a * b;
}

double multiply(double a, double b) // Function that returns the product of two doubles
{
    return a * b;
}

double multiply(int a, double b, bool flag) // Function that returns the product of an integer and a double with "optional" rounding of the number
{
    if(flag == false) // If the value of the flag is false, the product is returned as a double, so without any rounding of the value
    {
        double falseProduct = a * b;
        return falseProduct;
    } 
    else // If the value of the flag is true, the product is returned as an integer that is rounded either up or down depending on its value
    {
        /* I implemented the rounding of the product by adding 0.5 to the product of a and b.
            e.g. if int product = a*b would be 4.999, product would return 4 because of the data type. But because
            I add 0.5 to it, int product = a*b+0.5 will return the "correct" 5 because of a*b+0.5 is over 5. 
            If a*b=4.111, a*b+0.5=4.611 is still starting with 4, so int product would return 4, which is correct,
            because 4.111 would be floored instead of ceiled. */

        double product = a * b + 0.5; // Adding 0.5 to the product for rounding the product correctly

        int roundedProduct = (int) product; // Returning the product as an integer so that it "rounds" the value to an integer
        return roundedProduct;
    }
}

int main()
{
    // Printing out the products to the user by calling the function
    cout << multiply(2, 8) << endl;
    cout << multiply(1.22, 2.48) << endl;
    cout << multiply(3, 5.24, false) << endl;
    cout << multiply(3, 5.24, true) << endl;

    return 0;
}