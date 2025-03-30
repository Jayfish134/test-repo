#include <algorithm> //Library which includes the function reverse()
#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string x; //Variable in which the string from the user is stored in

    cout << "Type some words: "; //Prints text to the terminal asking user to type something



    //CHANGING USER INPUT'S LOWERCASE LETTERS TO UPPERCASE LETTERS

    getline(cin, x); //Gets a string from the user and saves it to the variable x

    string uppercase = x; //Saves the lowercase string "x" into variable "uppercase", and the uppercase is what we modify
    
    for (int i = 0; i < uppercase.length(); i++) //uppercase.length() is the length of the string
    {
        uppercase[i] = toupper(uppercase[i]); //Changes letter by letter lowercase to uppercase
    }
    
    cout << "The string in uppercase: " << uppercase << endl; //Printing out the uppercase string


    
    //NUMBER OF VOWELS IN THE STRING

    int vowels = 0; //The no. of vowels starts from 0

    for (int i = 0; x[i]; i++) //Loop to count vowels
    {
        if (x[i] == 'a' || x[i] == 'A' || x[i] == 'e' || x[i] == 'E' || x[i] == 'i' || x[i] == 'I' 
            || x[i] == 'o' || x[i] == 'O' || x[i] == 'u' || x[i] == 'U' || x[i] == 'y' || x[i] == 'Y')
        {
        vowels++; //The no. of vowels is increased by 1 if x[i] is a vowel
        }
    }

    cout << "The number of vowels in the string: " << vowels << endl; //Printing out the no. of vowels



    //THE STRING REVERSED

    string reversed = x; //Saving the string "x" to the string "reversed"

    reverse(reversed.begin(), reversed.end()); //Function to reverse the string "reversed"

    cout << "The string reversed: " << reversed << endl; //Printing out the string reversed

    return 0;
}