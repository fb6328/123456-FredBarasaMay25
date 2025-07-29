#include <iostream>
using namespace std;

int main()
{
    int number;
    while (number != 0)
    {
        // Prompt user for a number.  Stop the loop when the user enters 0.
        cout << "Enter a number: ";
        cin >> number;
    }
    cout << "You entered zero, exiting the loop. Bye!" << endl;
    return 0;
}