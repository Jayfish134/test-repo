#include <iostream>
#include <string>
using namespace std;

class Car
{
    private:
        string model;
        int year;
        int price;

    public:
        // Constructor
        Car(string m = "Example", int y = 0, int p = 0) 
        {
            model = m;
            year = y;
            price = p;
        } 

        // Destructor
        ~Car()
        {
            cout << "Car Destructor: " << model << " destroyed" << endl;
        }

        // Input function
        void input()
        {
            cout << "Enter model: ";
            cin >> model;

            cout << "Enter year: ";
            cin >> year;

            cout << "Enter price: ";
            cin >> price;
            cout << endl;
        }

        // To show car information (used later on in the CarCollection class)
        void display() const
        {
            cout << "Model: " <<  model << ", Year: " << year << ", Price: " << price << endl;
        }
        
        // To print out the Car Constructor information
        void printConstructorClassInfo() const
        {
            cout << "Car Constructor: " << model << " (" << year << ") - $" << price << endl; 
        }
};

class CarCollection
{
    private:
        int size;
        Car* cars; // Creating pointer "cars" to Car objects
    
    public:
        // Constructor
        CarCollection()
        {
            // Asking the user how many cars to create
            cout << "How many cars do you want to enter? ";
            cin >> size;
            cout << endl;

            // Dynamically allocating an array of cars
            cars = new Car[size];
            for (int i = 0; i < size; i++)
            {
                cars[i].input();
            }

            // Printing out the Car Constructor -info after user has entered the data
            for (int i = 0; i << size; i++)
            {
                cars[i].printConstructorClassInfo();
                cout << endl; 
            }
        }

        // Destructor that properly deletes the array
        ~CarCollection()
        {
            delete[] cars; // Cleaning up the array
            cout << "CarCollection destroyed" << endl;
        }

        // A member function to display all car details
        void displayCars() const
        {
            cout << "CarCollection initialized with " << size << " cars" << endl;
            cout << "\n--- Car Collection ---\n";
            for (int i = 0; i < size; i++)
            {
                cars[i].display();
            }
        }
};

int main()
{
    // Creating an array
    CarCollection carCollection1; // Creating a CarCollection object
    carCollection1.displayCars(); // Printing out the information of the cars

    return 0;
}