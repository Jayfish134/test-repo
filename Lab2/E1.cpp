#include <iostream>
using namespace std;

int intMultiply(int a, int b) // Function that returns the product of two integers
{
    return a * b;
}

double doubleMultiply(double c, double d) // Function that returns the product of two doubles
{
    return c * d;
}

double threeInputMultiply(int e, double f, bool flag) // Function that returns the product of an integer and a double with "optional" rounding of the number
{
    if(flag == false) // If the value of the flag is false, the product is returned as a double, so without any rounding of the value
    {
        double falseProduct = e * f;
        return falseProduct;
    } 
    else // If the value of the flag is true, the product is returned as an integer that is rounded either up or down depending on its value
    {
        /* I implemented the rounding of the product by adding 0.5 to the product of e and f.
            e.g. if int product = e*f would be 4.999, product would return 4 because of the data type. But because
            I add 0.5 to it, int product = e*f+0.5 will return the "correct" 5 because of e*f+0.5 is over 5. 
            If e*f=4.111, e*f+0.5=4.611 is still starting with 4, so int product would return 4, which is correct,
            because 4.111 would be floored instead of ceiled. */

        double product = e * f + 0.5; // Adding 0.5 to the product for rounding the product correctly

        int roundedProduct = (int) product; // Returning the product as an integer so that it "rounds" the value to an integer
        return roundedProduct;
    }
}

int main()
{
    // Defining the values for the variables
    int a = 2, b = 8;
    double c = 1.22, d = 2.48;
    int e = 3; double f = 5.24;
    bool flag = false;

    // Printing out the products to the user by calling the function
    cout << "The product of " << a << " and " << b << " is " << intMultiply(a, b) << endl;
    cout << "The product of " << c << " and " << d << " is " << doubleMultiply(c, d) << endl;
    cout << "The product of " << e << " and " << f << " is " << threeInputMultiply(e, f, flag) << endl;

    return 0;
}