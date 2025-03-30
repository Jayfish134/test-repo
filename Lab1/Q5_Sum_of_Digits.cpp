#include <iostream>
#include <string>

using namespace std;

int main()
{
    int number; //The user will input this value
    int sum = 0; //Initializing the value for the sum
    string number_formula;

    cout << "Give me an integer" << endl; //Prints an instruction to the user
    cin >> number; //The user gives the value for "number"

    string number_str = to_string(number); //Converting "int number" to a string and saving it to "number_str"

    //SUM
    for (int i = 0; i < number_str.length(); i++) //Going through every digit of the user's number
    {
        int digit = number_str[i] - '0'; //Converting string back to integer
        sum = sum + digit; //Sums the previous sum with the next digit in the user's number
    }

    //THE SUM'S "FORMULA"
    for (int i = 0; i < number_str.length(); i++) //Going through every digit of the user's number
    {
        number_formula = number_formula + number_str[i]; //

        if (i != number_str.length() - 1) //If the digit is not the last digit of the string, it will add a +
        {
            number_formula = number_formula + "+";
        }
    }

    cout << "The sum of the digits is " << sum << " (" << number_formula << ")" << endl; //Prints out the sum of the digits and the "formula"

    return 0;
}