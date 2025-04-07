#include <iostream>
using namespace std;

int intMultiply(int a, int b) // Function that returns the product of two integers
{
    return a * b;
}

double doubleMultiply(double c, double d) // Function that returns the product of two double numbers
{
    return c * d;
}

int threeInputMultiply(int e, double f, bool flag) // Function that returns the product of an integer and a double with "optional" rounding of the number
{
    if(flag == false) // If the value of the flag is false, the product is returned as a double
    {
        double falseProduct = e * f;
        return falseProduct;
    } 
    else // If the value of the flag is true, the product is returned as an integer that is rounded either up or down depending on its value
    {
        double product = e * f + 0.5;
        int roundedProduct = (int) product; // e.g. if e*f = 4.999, it will return 5 because of e*f+0.5 = over 5. If e*f=4.111, it will return 4, so flooring and ceiling is done!
        return roundedProduct;
    }
}

int main()
{
    int a = 2, b = 8;
    double c = 1.22, d = 2.48;
    int e = 3; double f = 5.24;
    bool flag = true;

    cout << "The product of " << a << " and " << b << " is " << intMultiply(a, b) << endl; // Printing out the products to the user by calling the function
    cout << "The product of " << c << " and " << d << " is " << doubleMultiply(c, d) << endl;
    cout << "The product of " << e << " and " << f << " is " << threeInputMultiply(e, f, flag) << endl;

    return 0;
}