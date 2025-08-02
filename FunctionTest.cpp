#include <iostream>
#include <cmath>
#include "Functions.h" //Programmer defined header file for function declarations

using namespace std;

int main()
{
    cout << "Squareroot of 16 is: " << sqrt(16) << endl;                   // Using sqrt function from cmath
    cout << "Power of 2 raised to 3 is: " << pow(2, 3) << endl;            // Using pow function from cmath
    cout << "Absolute value of -10 is: " << abs(-10) << endl;              // Using abs function from cmath
    cout << "Cosine of 0 radians is: " << cos(0) << endl;                  // Using cos function from cmath
    cout << "Sine of 0 radians is: " << sin(0) << endl;                    // Using sin function from cmath
    cout << "Tangent of 0 radians is: " << tan(0) << endl;                 // Using tan function from cmath
    cout << "Logarithm base 10 of 100 is: " << log10(100) << endl;         // Using log10 function from cmath
    cout << "Natural logarithm of e is: " << log(exp(1)) << endl;          // Using log function from cmath
    cout << "Exponential of 1 is: " << exp(1) << endl;                     // Using exp function from cmath
    cout << "Ceiling of 4.2 is: " << ceil(4.2) << endl;                    // Using ceil function from cmath
    cout << "Floor of 4.8 is: " << floor(4.8) << endl;                     // Using floor function from cmath
    cout << "Round of 4.5 is: " << round(4.5) << endl;                     // Using round function from cmath
    cout << "Addition of 5 and 10 is: " << addition(5, 10) << endl;        // Using user-defined function from Functions.h
    cout << "Subtraction of 10 and 5 is: " << subtraction(10, 5) << endl;  // Using user-defined function from Functions.h
    cout << "Division of 10.0 by 2.0 is: " << division(10.0, 2.0) << endl; // Using user-defined function from Functions.h
    return 0;
}
