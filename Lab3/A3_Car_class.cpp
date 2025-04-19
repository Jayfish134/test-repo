#include <iostream>
#include <string>
using namespace std;

class Car
{
    private: // Private attributes
        string* brand; // Declaring a pointer to the variable "brand". The pointer holds the memory address of the string.
        int year;
    
    public: // Public methods
        
        // Constructor (with dynamic allocation for brand)
        Car(string b, int y)
        {
            //Initializing brand and year using parameters
            brand = new string(b); // Dynamically allocated memory for brand
            year = y;

            // Prints out the following text:
            cout << "Car " << *brand << " from " << year << " created." << endl;
        }

        // Destructor
        ~Car()
        {
            delete brand; // Freeing the memory allocated for brand
            cout << "Car " << brand << " destroyed." << endl;
        }

        void showInfo()
        {
            // Displays the car brand and manufacturing year
            cout << "Car: " << *brand << ", Year: " << year << endl;
        }
};

int main()
{
    Car* car1 = new Car("Toyota", 2004); // Creating a Car object dynamically on the heap
    // Note for myself: new is used to dynamically allocate memory on the heap during runtime

    car1->showInfo(); // Accessing the heap object with a pointer

    delete car1; // Calling destructor. Deallocating the heap memory.
    car1 = nullptr; // Optional: Preventing a dangling pointer

    return 0;
}