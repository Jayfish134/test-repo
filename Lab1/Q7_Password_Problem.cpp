#include <iostream>
#include <string>

using namespace std;

#define MIN_LENGTH 8 //>= 8 characters

int main()
{
    string password;

    cout << "Enter a password" << endl;

    cin >> password;

    int length = password.length();

    if (length > MIN_LENGTH)
    {
        cout << "Strong Password" << endl;
    }
    
    else
    {
        cout << "Weak Password \n -Too short" << endl;
    }


    
    /*FOR LOOP Iterate through the string to check the presence of 
    required character types*/

    //for ()
    {
        //One uppercase letter, kirjota jokainen aakkonen
        //One lowercase letter, kirjota jokainen aakkonen
        //One digit, kirjota jokainen numero
        //One special character (e.g., !@#$%^&*)

        /*POHDINTA:
        - mites ois boolean käyttäminen to check if true or false?*/
    }

    return 0;
}