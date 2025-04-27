#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string name;

    cout << "Enter your age: ";
    cin >> age;
    cin.ignore(); // Clears the leftover newline

    /*
    cin.ignore() is used to discard characters from the input buffer. 
    This is especially helpful after using cin >>, which leaves a newline 
    character (\n) in the input stream.
    */

    cout << "Enter your full name: ";
    getline(cin, name); // Works correctly now, because of the cin.ignore()

    cout << "Age: " << age << ", Name: " << name << endl;
}