#include <iostream>
using namespace std;

int main()
{
    int number = 12;
    cout << "Even numbers from 12 to 50: " << endl;
    do
    {
        cout << number << " ";
        number += 2; // Increment by 2 to get the next even number
    } while (number <= 50);
}