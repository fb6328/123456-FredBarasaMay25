// Testing different types of operators in C++

#include <iostream>
#include <string>

using namespace std;

int main()
{

    // Variable declarion
    string fullName;
    int num1, num2, increment;

    // Prompt user for input

    cout << "Enter your full name" << endl;
    getline(cin, fullName);
    cout << "Hello, " << fullName << "! - Captured using getline()" << endl; // Output the full name

    cout << "Enter first number" << endl;
    cin >> num1;
    cout << "Enter second nuber" << endl;
    cin >> num2;

    // ARITHMETIC OPERATIONS
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
    // COMPOUND ASSIGNMENT OPERATORS
    increment += num1; // Add the value of num1 to increment(increment=increment+num1)
    cout << "The new value of increment = " << increment << endl;
    increment -= num1; // Add the value of num1 to increment(increment=increment-num1)
    cout << "The new value of increment = " << increment << endl;
    increment *= num1; // Add the value of num1 to increment(increment=increment*num1)
    cout << "The new value of increment = " << increment << endl;
    increment /= num1; // Add the value of num1 to increment(increment=increment/num1)
    cout << "The new value of increment = " << increment << endl;

    // COMPARISON OPERATORS
    cout << num1 << " > " << num2 << " = " << (num1 > num2) << endl;
    cout << num1 << " >= " << num2 << " = " << (num1 >= num2) << endl;
    cout << num1 << " < " << num2 << " = " << (num1 < num2) << endl;
    cout << num1 << " <= " << num2 << " = " << (num1 <= num2) << endl;
    cout << num1 << " == " << num2 << " = " << (num1 == num2) << endl;
    cout << num1 << " != " << num2 << " = " << (num1 != num2) << endl;

    // BOOLEAN OPERATORS
    cout << (num2 > num1) << " || " << (num2 > num1) << " = " << ((num2 > num1) || (num2 > num1)) << endl;

    cout << "Enter your full name again" << endl;
    cin >> fullName;
    cout << "Hello, " << fullName << "! - Captured using cin" << endl; // Only the first word of fullName will be printed due to cin limitation
}