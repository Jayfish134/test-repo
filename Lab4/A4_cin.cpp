#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your full name: ";
    getline(cin, name); // This will be skipped!
    /*cin.ignore() is used to discard characters from the input buffer. 
    This is especially helpful after using cin >>, which leaves a newline 
    character (\n) in the input stream.
    */

    cout << "Age: " << age << ", Name: " << name << endl;
}