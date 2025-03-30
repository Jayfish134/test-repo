#include <iostream>

using namespace std;

//FUNCTION TO REVERSE DIGITS OF A NUMBER
int reverseDigits(int number) //Defining the function
{
    int reversed = 0; //Initializing value

    /*In the while-loop below we are using modulo to get the rightmost digit of the 
    user's number.*/
    while (number > 0)
    {
        /*Adds the righmost digit to the reversed number by shifting its digits
        one position to the left. The portion (number % 10) of the following code
        obtains the rightmost digit of the number with modulo by 10*/
        reversed = reversed * 10 + number % 10;

        /*Removes the last digit from the number by dividing it by 10*/
        number = number / 10; 
    }
    return reversed; //Returns the reversed digits
}

//MAIN PROGRAM
int main()
{
    int number; //Defining the variable "number"
    cout << "Give me a number" << endl; //Printing instructions for the user
    cin >> number; //Getting a digit from the user
    cout << "The number's digits reversed: " << reverseDigits(number) << endl; //Printing the reversed digits

    return 0;
}