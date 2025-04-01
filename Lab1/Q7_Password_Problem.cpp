#include <iostream>
#include <string>

using namespace std;

#define MIN_LENGTH 8 // >= 8 characters

int main()
{
    string password;
    int uppercase = 0;
    int lowercase = 0;
    int digit = 0;
    int special_character = 0;

    cout << "Enter a password" << endl;
    cin >> password;

    int length = password.length();

    //IDK KOODINPÄTKIÄ, IDK JÄRKEVÄÄ JÄRJESTYSTÄ

    // CODE TO CHECK IF THE PASSWORD HAS SPECIFIC CHARACTER TYPES
    for (int i = 0; password[i]; i++)
    {
        if (password[i] == 'A' || password[i] == 'B' || password[i] == 'C' || password[i] == 'D' 
            || password[i] == 'E' || password[i] == 'F' || password[i] == 'G' || password[i] == 'H' 
            || password[i] == 'I' || password[i] == 'J' || password[i] == 'K' || password[i] == 'L'
            || password[i] == 'M' || password[i] == 'N' || password[i] == 'O' || password[i] == 'P' 
            || password[i] == 'Q' || password[i] == 'R' || password[i] == 'S' || password[i] == 'T' 
            || password[i] == 'U' || password[i] == 'V' || password[i] == 'W' || password[i] == 'X'
            || password[i] == 'Y'|| password[i] == 'Z')
        {
            uppercase++; //The no. of vowels is increased by 1 if password[i] is a vowel
        }   
        
        // CODE TO CHECK IF THE PASSWORD HAS LOWERCASE LETTERS
        if (password[i] == 'a' || password[i] == 'b' || password[i] == 'c' || password[i] == 'd' 
            || password[i] == 'e' || password[i] == 'f' || password[i] == 'g' || password[i] == 'h' 
            || password[i] == 'i' || password[i] == 'j' || password[i] == 'k' || password[i] == 'l'
            || password[i] == 'm' || password[i] == 'n' || password[i] == 'o' || password[i] == 'p' 
            || password[i] == 'q' || password[i] == 'r' || password[i] == 's' || password[i] == 't' 
            || password[i] == 'u' || password[i] == 'v' || password[i] == 'w' || password[i] == 'x'
            || password[i] == 'y'|| password[i] == 'z')
        {
            lowercase++; //The no. of vowels is increased by 1 if password[i] is a vowel
        }

        if (password[i] == '0' || password[i] == '1' || password[i] == '2' || password[i] == '3' 
            || password[i] == '4' || password[i] == '5' || password[i] == '6' || password[i] == '7' 
            || password[i] == '8' || password[i] == '9')
        {
            digit++; //The no. of digits is increased by 1 if password[i] is a digit
        }

        if (password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' 
            || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*')
        {
            special_character++; //The no. of digits is increased by 1 if password[i] is a digit
        }

    }



    //TEE JOKAINEN IF JUTTU SISÄKKÄIN????
    if (length > MIN_LENGTH && uppercase >= 1 && lowercase >= 1
        && digit >= 1 && special_character >= 1) // Checking conditions one by one
        {
            cout << "Strong Password" << endl;
        }
    else
        {
            cout << "Weak Password \n -Too short" << endl;
        }

//jos true, printtaa x, jos false, print y

    return 0;
}