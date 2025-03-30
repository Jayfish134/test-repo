#include <iostream>
using namespace std;

#define MAX_LIMIT 52//Macro that replaced the original 50 to the value of e.g. 52

int main()
{
    //Loop to print even numbers from 1 to MAX_LIMIT
    for (unsigned int i = 2; i <= MAX_LIMIT; i += 2) //Using unsigned int instead of int
    {
        cout << i << " ";
    }
    return 0;
}

/*The reason why i changed int to unsigned int was because
unsigned integer has values from 0 to 4,294,967,295 
int has values from -2,147,483,648 to 2,147,483,647
Because we are starting at i=2, the negative values of int are unused.*/