#include <iostream>
#include <string>
using namespace std;

class Car
{
    protected:
        string model;
        int year;
        float price;

    public:
        // Constructor
        Car(string m = "Example", int y = 0, float p = 0) : model(m), year(y), price(p) {}

        // Destructor
        virtual ~Car() {}

        // Basic input function which is used as a base for the derived classes' input functions
        void inputBasic()
        {
            cout << "Enter model: ";
            cin >> model;

            cout << "Enter year: ";
            cin >> year;

            cout << "Enter price: ";
            cin >> price;
        }

        // Basic display function which is used as a base for the derived classes' display functions
        virtual void displayBasic() const
        {
            cout << "Model: " << model << ", Year: " << year << ", Price: $" << price;
        }

        // A function that I had to create to make this entire program work
        virtual void input()
        {
            inputBasic();
            cout << endl;
        }
        
        // Another function that I had to create to make this entire program work
        virtual void display() const
        {
            displayBasic();
        }

};

// ElectricCar is a derived class of Car
class ElectricCar : public Car
{
    protected:
        float batterySize;
    
    public:
        // Constructor
        ElectricCar(float bSize = 0) : batterySize(bSize) {}

        // Destructor
        ~ElectricCar()
        {
            cout << "Destroying Electric Car: " << model << endl;
        }

        void input() override
        {
            inputBasic(); // Calling the basic input function

            // The additional questions for the user unique to this class
            cout << "Enter battery size (kWh): ";
            cin >> batterySize;
            cout << endl;
        }

        virtual void display() const override
        {
            displayBasic(); // Calling the basic display function
            cout << ", Battery: " << batterySize << " kWh" << endl; // Additional information unique to this class
        }
};

// GasCar is a derived class of Car
class GasCar : public Car
{
    protected:
        float fuelCapacity;
    
        public:
            // Constructor
            GasCar(float fuelCap = 0) : fuelCapacity(fuelCap) {}

            // Destructor
            ~GasCar()
            {
                cout << "Destroying Gas Car: " << model << endl;
            }

            void input() override
            {
                inputBasic(); // Calling the basic input function

                // The additional questions for the user unique to this class
                cout << "Enter fuel capacity (L): ";
                cin >> fuelCapacity;
                cout << endl;
            }

            void display() const override
            {
                displayBasic(); // Calling the basic display function
                cout << ", Fuel: " << fuelCapacity << " L" << endl; // Additional information unique to this class
            }
    
};

// HybridCar is a derived class of Car
class HybridCar : public Car
{
    protected:
        float batterySize;
        float fuelCapacity;
    
    public:
        // Constructor
        HybridCar(float bSize = 0, float fuelCap = 0) : batterySize(bSize), fuelCapacity(fuelCap) {}

        // Destructor
        ~HybridCar()
        {
            cout << "Destroying Hybrid Car: " << model << endl;
        }

        void input() override
        {
            inputBasic(); // Calling the basic input function

            // The additional questions for the user unique to this class
            cout << "Enter battery size (kWh): ";
            cin >> batterySize;

            cout << "Enter fuel capacity (L): ";
            cin >> fuelCapacity;
            cout << endl;
        }

        void display() const override
        {
            displayBasic(); // Calling the basic display function
            cout << ", Battery: " << batterySize << " kWh" << ", Fuel: " << fuelCapacity << " L" << endl; // Additional information unique to this class
        }

};

int main()
{
    int n; // The number of cars
    cout << "Enter total number of cars: ";
    cin >> n;
    cout << endl;

    // Creating dynamic arrays on the heap
    Car** cars = new Car*[n]; // A base pointer array
    int* carType = new int[n];

    // Loop to get the information for each car the user wants to put in the system
    for (int i = 0; i < n; i++)
    {
        int car_n_type;
        cout << "Car " << (i+1) << " type: " << endl;
        cout << "[1] Electric" << endl;
        cout << "[2] Gasoline" << endl;
        cout << "[3] Hybrid" << endl;

        cout << "Enter choice: ";
        cin >> car_n_type;

        carType[i] = car_n_type; // Now each car in the array gets a car type assigned to it

        // Creating a car depending on the type that the user chose
        switch(car_n_type)
        {
        case 1: // Electric
            cars[i] = new ElectricCar();
            break;

        case 2: // Gasoline
            cars[i] = new GasCar();
            break;

        case 3: // Hybrid
            cars[i] = new HybridCar();
            break;
        }

        cars[i]->input(); // Inputting car details to the function
    }

    cout << "--- Fleet Information ---" << endl;

    // Calling the appropriate display() function and using static_cast<>() to cast the correct derived type
    for (int i = 0; i < n; i++)
    {
        switch(carType[i])
        {
        case 1: // Electric
            static_cast<ElectricCar*>(cars[i])->display();
            break;

        case 2: // Gasoline
        static_cast<GasCar*>(cars[i])->display();
            break;

        case 3: // Hybrid
        static_cast<HybridCar*>(cars[i])->display();
            break;
        }
    }

    // Cleaning up
    cout << "\n--- Cleaning up fleet ---" << endl;
    for (int i = 0; i < n; i++)
    {
        delete cars[i];
    }

    // Cleaning up more dynamic arrays
    delete[] cars;
    delete[] carType;

    return 0;
}