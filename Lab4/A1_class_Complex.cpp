#include <iostream>
using namespace std;

// Remember to use friend for operator << and the class needs to have a constructor

class Complex // Creating a class that represents complex numbers with real and imaginary parts
{
    private:
        int realPart;
        int imaginaryPart;

    public:
        friend void printComplexNumber(); // Declaring friend function
    {}
};

// Defining the friend function
void printComplexNumber()
{
    cout << >> // idk halutaanko tätä
}



// Test cases: create 2 complex numbers and display their sum, difference and quotinent

int main()
{
    //c1 ja c2 erikseen luo??? onks alla oleva luonu ne?
    Complex c1(4, 5), c2(2, -3);
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "Sum = " << c1 + c2 << endl;
    cout << "Difference = " << c1 - c2 << endl;
    cout << "Quotient = " << c1 / c2 << endl;

    return 0;
}