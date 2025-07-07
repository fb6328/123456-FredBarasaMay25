#include <iostream>
using namespace std;
int main()
{
    // Variable declaration
    string fName, lName;

    // Prompt user for input and capture input
    cout << endl;
    cout << "Enter your first name: ";
    cin >> fName; // Read first name from user input

    cout << "Enter your last name: ";
    cin >> lName; // Read last name from user input

    // Output statements to the console
    cout << "Hello, " << fName << " " << lName << "!" << endl;
    cout << "Welcome to the wonderful world of C++ \n";
    cout << "This is my first C++ output statement" << endl;
    cout << "Soon, I will learn how to input data into my program" << endl;
    return 0; // Indicate that the program ended successfully
}