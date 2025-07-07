// Write a program to find the maximum of three numbers input by a user
#include <iostream> // Include the input-output stream library
using namespace std;
int main()
{
    int num1, num2, num3; // Declare three integer variables to hold the numbers

    // Prompt the user for input
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3; // Read three integers from the user
    // Calculate the maximum of the three numbers
    int maxNum = num1; // Assume num1 is the maximum initially
    if (num2 > maxNum)
    {                  // Check if num2 is greater than the current maximum
        maxNum = num2; // Update maxNum if num2 is greater
    }
    if (num3 > maxNum)
    {                  // Check if num3 is greater than the current maximum
        maxNum = num3; // Update maxNum if num3 is greater
    }
    // Output the maximum number
    cout << "The maximum of the three numbers is: " << maxNum << endl; // Display the maximum number
    return 0;                                                          // Indicate that the program ended successfully
}
// This program finds the maximum of three numbers input by a user
// It prompts the user to enter three numbers, compares them, and outputs the maximum value.
// The program uses basic input/output operations and conditional statements to determine the maximum value.
