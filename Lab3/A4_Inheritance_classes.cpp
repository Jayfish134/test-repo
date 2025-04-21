#include <iostream>
#include <string>
using namespace std;

class Vehicle // The base class
{
    protected: // Protected attributes
        string* brand;
        int year;

        // Constructor: initializes brand and year
        Vehicle(string b, int y)
        {
            brand = new string(b);
            year = y;
        }
        
        void showInfo() // Function that displays brand and year
        {
            cout << "Brand: " << *brand << endl;
            cout << "Year: " << year << endl;
        }

        void startEngine() // Function that prints out the following message
        {
            cout << "Starting engine of Vehicle" << endl;
        }
};

class Car : protected Vehicle // A derived class: Car
{
    private:
        int numDoors;

        Car(string b, int y, int numD) : Vehicle(b, y) // Derived class constructor. Calling the base constructor.
        {
            //brand = b; NOT NEEDED BECAUSE THEY ARE INHERITED FROM THE BASE CLASS?
            //year = y;
            numDoors = numD;
        }

        void showInfo() // Overriding showInfo() to display all 3 attributes
        {
            cout << "Brand: " << *brand << endl;
            cout << "Year: " << year << endl;
            cout << "Number of doors: " << numDoors << endl;
        }

        void startEngine() // Overriding startEngine() to print something else
        {
            cout << "Car engine is starting!" << endl;
        }
};

class ElectricCar : protected Car // A derived class, ElectricCar, that inherits from Car
{
    private:
        int batteryCapacity; // Represents the battery size in kWh
    
        ElectricCar(string b, int y, int numD, int batCap) : Car(b, y, numD) // Calling the constructor of Car
        {
            *brand = b;
            year = y;
            numDoors = numD;
            batteryCapacity = batCap;
        }
    
        void showInfo() // Overriding showInfo() to display all 4 attributes
        {
            cout << "Brand: " << *brand << endl;
            cout << "Year: " << year << endl;
            cout << "Number of doors: " << numDoors << endl;
            cout << "Battery capacity (kWh): " << batteryCapacity << endl;
        }
    
        void startEngine() // Overriding startEngine() to print something else
        {
            cout << "Electric engine is starting... Silent but powerful!" << endl;
        }
};

int main()
{
    // Create a Vehicle object using new and call...
    Vehicle vehicle1("Generic vehicle", 2020);
    vehicle1.showInfo();
    vehicle1.startEngine();

    // Create a Car object using new and call
    Car car1("Ford", 1997, 4);
    car1.showInfo();
    startEngine();

    // Create an ElectricCar object using the default contructor, and call
    ElectricCar electric1("Toyota", 2012, 4, 50);
    electric1.showInfo();
    electric1.startEngine();

    // Create an ElectricCar object using the parameterized constructor, and call
    ElectricCar electric2("Nissan", 2010, 4, 75);
    electric2.showInfo();
    electric2.startEngine();

    // Using delete to clean up memory for all objects
    delete vehicle1;
    delete car1;
    delete electric1;

    return 0;
}