// Testing the use of escape sequences in C++ strings
#include <iostream>
using namespace std;

int main()
{
    // Output statements to the console using escape sequences
    cout << "Hello, World!" << endl;                     // New line at the end
    cout << "This is my first C++ output statement\n\n"; // New line and two new lines after
    cout << "Soon, \n I will learn how to input data into my program" << endl;
    cout << "I can use \"double quotes\" inside a string." << endl;      // Using double quotes
    cout << "I can also use \'single quotes\' inside a string." << endl; // Using double quotes
    cout << "I can also use \\ backslash inside a string." << endl;      // Using backslash
    cout << "This is a tabbed\t\ttext." << endl;                         // Using tab character
    cout << "This is a new line\nin the same string." << endl;           // Using new line character
    cout << "System alert sound: \a" << endl;                            // Using alert sound (may not work in all environments)
    return 0;                                                            // Indicate that the program ended successfully
}