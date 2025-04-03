#include <iostream>

using namespace std;

// EDIT A AND B TO BE INTEGER AND BOOL

int multiply(int a, int b) // Function that returns the product of a and b
{
    return a * b;
}

double multiply(double a, double b)
{
    return a * b;
}

idk multiply(int a, double b, bool flag)
{
    if(flag == false)
    {
        double result = integer * double;
        return result;
    } 

    if(flag == true)
    {
        double result = integer * double;
        
        //pitää tarkastaa onko suurempi kuin 0.5 vai ei, sen perusteella floor() tai ceil()
        if(result >) // yritä kirjottaa ehto pyöristämiselle
        return // result should be ceiled or floored? what does that mean
        
        /*floor function returns the integer value 
        just lesser than the given rational value. 
        ceil function returns the integer value just 
        greater than the given rational value*/
    }
}


int main()
{
    int integer_product = multiply(1, 2);
    double double_product = multiply (1.2, 1.2);
    
    cout << "The product integers is " << integer_product << endl; // Printing out the products to the user by calling the function
    cout << "The product of doubles is " << double_product << endl;


    /* HUOM. 
        The main will call the multiply functions with
        different inputs. Print out the final result 
        values in different cases*/
    return 0;
}

/*I would have taken values a and b and c from the user, but
when I tried to input double values, it gave the product to me
as a value of 0 instead of e.g. 1.44 for some reason.*/