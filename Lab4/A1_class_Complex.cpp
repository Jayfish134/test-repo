#include <iostream>
using namespace std;

class Complex // Creating a class that represents complex numbers with real and imaginary parts
{
    private:
        double realPart; // Creating the variables
        double imaginaryPart;

    public:
        // Constructor
        Complex(double a, double bi) : realPart(a), imaginaryPart(bi) {}

        // Declaring friend functions
        friend void printComplexNumber(const Complex &c);
        friend ostream& operator<<(ostream& out, const Complex &c);
        friend Complex operator+(const Complex &a, const Complex &b);
        friend Complex operator-(const Complex &a, const Complex &b);
        friend Complex operator/(const Complex &a, const Complex &b);
};

// Defining the the function
void printComplexNumber(const Complex &c) // const Complex &c being the object that will be used inside this function
{
    if (c.realPart >= 0) // If the real part is positive
    {
        cout << c.realPart << "+" << c.imaginaryPart << "i" << endl;
    }
    else // If the imaginary part is negative
    {
        cout << c.realPart << c.imaginaryPart << "i" << endl;
    }
}

// Overloads the + operator 
Complex operator+(const Complex &a, const Complex &b)
{
    return Complex(a.realPart + b.realPart, a.imaginaryPart + b.imaginaryPart);
}

// Overloads the - operator 
Complex operator-(const Complex &a, const Complex &b)
{
    return Complex(a.realPart - b.realPart, a.imaginaryPart - b.imaginaryPart);
}

// Overloads the / operator 
Complex operator/(const Complex &a, const Complex &b)
{
    double denominator = b.realPart * b.realPart + b.imaginaryPart * b.imaginaryPart;

    double realNumerator = a.realPart * b.realPart + a.imaginaryPart * b.imaginaryPart;
    double imagNumerator = a.imaginaryPart * b.realPart - a.realPart * b.imaginaryPart;

    double real = realNumerator / denominator;
    double imag = imagNumerator / denominator;

    return Complex(real, imag);
}

// Overloads the << operator 
ostream& operator<<(ostream& out, const Complex &c)
{
    if (c.imaginaryPart >= 0)
    {
        out << c.realPart << "+" << c.imaginaryPart << "i";
    }
    else
    {
        out << c.realPart << c.imaginaryPart << "i";
    }
    return out;
}

int main()
{
    Complex c1(4, 5), c2(2, -3); // Creating two objects c1 and c2

    // Printing out the values
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "Sum = " << c1 + c2 << endl;
    cout << "Difference = " << c1 - c2 << endl;
    cout << "Quotient = " << c1 / c2 << endl;

    return 0;
}