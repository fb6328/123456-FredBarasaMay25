// This is my first C++ program
#include <iostream> // Include the input-output stream library
#include <cmath>    // Include the cmath library for mathematical functions
using namespace std;
int main()
{
    // cout << "Hello, World!" << endl; // Output a greeting message
    // cout << "" << endl;
    int x;
    cout << "Enter a number to see its absolute value: " << endl;      // Prompt the user for input
    cin >> x;                                                          // Read an integer from the user
    cout << "The absolute value of " << x << " is " << abs(x) << endl; // Calculate and display the absolute value

    return 0; // Indicate that the program ended successfully
}
