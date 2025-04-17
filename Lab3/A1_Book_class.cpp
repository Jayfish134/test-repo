#include <iostream>
#include <string>
using namespace std;

class Book // Creating a class called "Book"
{
    private: // Private attributes of the class
        string title;
        int pages;
        string author = "Peter";

    protected: // Protected attributes of the class
        float price;

    public: // Public attributes of the class
        string publisher;
        void displayAuthorInfo() // -the function printout the author info to terminal. Im going to assume that this means the name of the author.
        {
            cout << "Author: " << author << endl;
        }
};

int main()
{
    Book book1; // Creating an object called "book1" in class "Book"
    book1.displayAuthorInfo(); // Calling the function, which prints out the author

    return 0;
}