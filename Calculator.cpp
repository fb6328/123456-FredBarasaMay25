// A Simple calculator program in C++ that performs basic arithmetic operations

#include <iostream>
#include <string>
using namespace std;

int main()
{

    // Variable declaration
    float num1, num2, addition,
        subtraction, multiplication,
        division, modulus; // Declare variables for two numbers and results of operations

    // Input
    cout << "Enter first number: ";
    cin >> num1; // Input the first number from the user
    cout << "Enter second number: ";
    cin >> num2; // Input the second number from the user

    // Operations
    addition = num1 + num2;       // Perform addition
    subtraction = num1 - num2;    // Perform subtraction
    multiplication = num1 * num2; // Perform multiplication
    division = num1 / num2;       // Perform division
    // modulus = num1% num2; // Perform modulus operation

    // Output the results of the operations
    cout << "___________________________________\n";
    cout << num1 << " + " << num2 << " = " << addition << endl;
    cout << num1 << " - " << num2 << " = " << subtraction << endl;
    cout << num1 << " * " << num2 << " = " << multiplication << endl;
    cout << num1 << " / " << num2 << " = " << division << endl;
    cout << num1 << " % " << num2 << " = " << modulus << endl;
}