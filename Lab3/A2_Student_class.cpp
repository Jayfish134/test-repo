#include <iostream>
#include <string>
using namespace std;

class Student // Creating a class called "Student"
{
    private: // Private attributes of the class
        string name;
        int age;
        char grade;
        string group = "2025 group";

    public: // Public attributes of the class
        // Setters
        void setName(string n) // Function to set the name of the student
        {
            name = n;
        }
        void setAge(int a) // Function to set the age of the student
        {
            age = a;
        }
        void setGrade(char g) // Function to set the grade of the student
        {
            grade = g;
        }

        // Getters
        string getName() // Function to get the name of the student
        {
            return name; // The function returns the name
        }
        int getAge() // Function to get the age of the student
        {
            return age; // The function returns the age
        }
        char getGrade() // Function to get the grade of the student
        {
            return grade; // The function returns the grade
        }

        void displayInfo() // Prints the student's info using the getters
        {
            // Using the getter method to retrieve and print the following info:
            cout << "Name of the student: " << getName() << endl;
            cout << "Age of the student: " << getAge() << endl;
            cout << "Grade of the student: " << getGrade() << endl;
            cout << "Group of the student: " << group << endl;
        }
};

int main()
{
    Student student1; // Creating one Student
    // Using the setter methods to assign values to the student
    student1.setName("Johanna"); 
    student1.setAge(20);
    student1.setGrade('C');

    // Calling displayInfo() to show full student data, which uses the getters to get the information
    student1.displayInfo();

    return 0;
}