#include <iostream>

using namespace std;
int myFunction(int, float); // Function prototype

const int globalVar = 20; // Global variable

int main()
{
    const float myConstVar = 3.142;
    int localVar1 = 10;               // Local variable
    cout << myFunction(2, 3) << endl; // This will print the value of localVar
}

int myFunction(int paramVar1, float paramVar2) // Function definition with two parameters
{
    int localVar2 = 40;
    int localVar3 = paramVar1;         // Local variable
    float localVar4 = paramVar2;       // Local variable
    float sum = localVar3 + localVar4; // Local variable
    cout << "Value of local variable in main: " << localVar2 << endl;
    cout << "Value of global variable: " << globalVar << endl; // This will print the value of globalVar
    cout << "Sum of the parameters = " << sum << endl;         // This will print the sum of paramVar and paramVar2
    return 0;
}